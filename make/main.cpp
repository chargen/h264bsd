#include <iostream>
#include <fstream>
#include <stdio.h>

extern "C"
{
#include "../src/h264bsd_decoder.h"
}


int main(int argc, char **argv) {

  std::cout << argc << std::endl;
  std::cout << argv[1] << std::endl;


  storage_t *decoder = NULL;
  char* filename = argv[1];
  
  std::cout << "step 1\n";
  
  
  std::cout << filename << std::endl;
  
  // open the file:
  std::streampos fileSize;
  std::ifstream file(filename, std::ios::binary);

  // get its size:
  file.seekg(0, std::ios::end);
  fileSize = file.tellg();
  file.seekg(0, std::ios::beg);
  
  std::cout << "filesize: " << fileSize << std::endl;

  // read the data:
  //std::vector<BYTE> fileData(fileSize);
  //file.read((char*) &fileData[0], fileSize);
  //return fileData;
  
  
  
  //FILE *input = fopen(filename, "rb");
  
    //fseek(input, 0L, SEEK_END);
    //long fileSize = ftell(input);

    u8 *fileData = (u8*)malloc(fileSize);
    if(fileData == NULL) return 1;
  std::cout << "step 5\n";

    //LARGE_INTEGER frequency_li;
    //QueryPerformanceFrequency(&frequency_li);
    //double frequency = (double)(frequency_li.QuadPart);
  
  std::cout << "step 1\n";

    while(true) {
        //fseek(input, 0L, SEEK_SET);
        file.seekg(0, std::ios::beg);
        //size_t inputRead = fread(fileData, sizeof(u8), fileSize, input);
      file.read((char*) fileData, fileSize);

        //LARGE_INTEGER start;
        //QueryPerformanceCounter(&start);

        double numFrames = 0;
        u8* byteStrm = fileData;
        u32 len = fileSize;
        u32 bytesRead = 0;
        u32 status = H264BSD_RDY;

        decoder = h264bsdAlloc();
        status = h264bsdInit(decoder, 0);
        if(status > 0) return 2;
        
        while(len > 0) {
            status = h264bsdDecode(decoder, byteStrm, len, 0, &bytesRead);

            if(status == H264BSD_PIC_RDY) {
                ++numFrames;
                u32 picId, isIdrPic, numErrMbs;
                u32* picData = h264bsdNextOutputPictureBGRA(decoder, &picId, &isIdrPic, &numErrMbs);
                printf("got some pic\n");
            }

            if(status == H264BSD_ERROR) {
                printf("General Error with %i bytes left\n", len);
            }

            if(status == H264BSD_PARAM_SET_ERROR) {
                printf("Param Set Error with %i bytes left\n", len);
            }

            if(status == H264BSD_MEMALLOC_ERROR) {
                printf("Malloc Error with %i bytes left\n", len);
            }

            byteStrm += bytesRead;
            len-= bytesRead;
            status = H264BSD_RDY;
        }

        h264bsdShutdown(decoder);
        h264bsdFree(decoder);

        //LARGE_INTEGER end;
        //QueryPerformanceCounter(&end);

        //double decodeTime = (double)(end.QuadPart - start.QuadPart) / frequency;

        //printf("Decode completed in %f seconds (%f fps)\n", decodeTime, numFrames/decodeTime);
    }


    
    
    
    return 0;
}
