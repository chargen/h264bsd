TARGET_BIN = binfile
CPP = g++
CC = gcc

COPT = -c 
CPPOPT = -c -fpermissive 
LOPT = 

#COPT = -m32 -c 
#CPPOPT = -m32 -c -fpermissive 
#LOPT = -m32

$(TARGET_BIN) : h264bsd_byte_stream.o h264bsd_cavlc.o h264bsd_conceal.o h264bsd_deblocking.o h264bsd_decoder.o h264bsd_dpb.o h264bsd_image.o h264bsd_inter_prediction.o h264bsd_intra_prediction.o h264bsd_macroblock_layer.o h264bsd_nal_unit.o h264bsd_neighbour.o h264bsd_pic_order_cnt.o h264bsd_pic_param_set.o h264bsd_reconstruct.o h264bsd_sei.o h264bsd_seq_param_set.o h264bsd_slice_data.o h264bsd_slice_group_map.o h264bsd_slice_header.o h264bsd_storage.o h264bsd_stream.o h264bsd_transform.o h264bsd_util.o h264bsd_vlc.o h264bsd_vui.o H264SwDecApi.o TestBenchMultipleInstance.o
	$(CPP) -o $(TARGET_BIN) h264bsd_intra_prediction.o h264bsd_byte_stream.o h264bsd_cavlc.o h264bsd_conceal.o h264bsd_deblocking.o h264bsd_decoder.o h264bsd_dpb.o h264bsd_image.o h264bsd_inter_prediction.o h264bsd_macroblock_layer.o h264bsd_nal_unit.o h264bsd_neighbour.o h264bsd_pic_order_cnt.o h264bsd_pic_param_set.o h264bsd_reconstruct.o h264bsd_sei.o h264bsd_seq_param_set.o h264bsd_slice_data.o h264bsd_slice_group_map.o h264bsd_slice_header.o h264bsd_storage.o h264bsd_stream.o h264bsd_transform.o h264bsd_util.o h264bsd_vlc.o h264bsd_vui.o H264SwDecApi.o TestBenchMultipleInstance.o $(LOPT)

clean :
	rm -rf *.{o,gcda,gcno} $(TARGET_BIN)

h264bsd_byte_stream.o : ../src/h264bsd_byte_stream.c
	$(CC) $(COPT) ../src/h264bsd_byte_stream.c

h264bsd_cavlc.o : ../src/h264bsd_cavlc.c
	$(CC) $(COPT) ../src/h264bsd_cavlc.c

h264bsd_conceal.o : ../src/h264bsd_conceal.c
	$(CC) $(COPT) ../src/h264bsd_conceal.c

h264bsd_deblocking.o : ../src/h264bsd_deblocking.c
	$(CC) $(COPT) ../src/h264bsd_deblocking.c

h264bsd_decoder.o : ../src/h264bsd_decoder.c
	$(CC) $(COPT) ../src/h264bsd_decoder.c

h264bsd_dpb.o : ../src/h264bsd_dpb.c
	$(CC) $(COPT) ../src/h264bsd_dpb.c

h264bsd_image.o : ../src/h264bsd_image.c
	$(CC) $(COPT) ../src/h264bsd_image.c

h264bsd_inter_prediction.o : ../src/h264bsd_inter_prediction.c
	$(CC) $(COPT) ../src/h264bsd_inter_prediction.c

h264bsd_intra_prediction.o : ../src/h264bsd_intra_prediction.c
	$(CC) $(COPT) ../src/h264bsd_intra_prediction.c

h264bsd_macroblock_layer.o : ../src/h264bsd_macroblock_layer.c
	$(CC) $(COPT) ../src/h264bsd_macroblock_layer.c

h264bsd_nal_unit.o : ../src/h264bsd_nal_unit.c
	$(CC) $(COPT) ../src/h264bsd_nal_unit.c

h264bsd_neighbour.o : ../src/h264bsd_neighbour.c
	$(CC) $(COPT) ../src/h264bsd_neighbour.c

h264bsd_pic_order_cnt.o : ../src/h264bsd_pic_order_cnt.c
	$(CC) $(COPT) ../src/h264bsd_pic_order_cnt.c

h264bsd_pic_param_set.o : ../src/h264bsd_pic_param_set.c
	$(CC) $(COPT) ../src/h264bsd_pic_param_set.c

h264bsd_reconstruct.o : ../src/h264bsd_reconstruct.c
	$(CC) $(COPT) ../src/h264bsd_reconstruct.c

h264bsd_sei.o : ../src/h264bsd_sei.c
	$(CC) $(COPT) ../src/h264bsd_sei.c

h264bsd_seq_param_set.o : ../src/h264bsd_seq_param_set.c
	$(CC) $(COPT) ../src/h264bsd_seq_param_set.c

h264bsd_slice_data.o : ../src/h264bsd_slice_data.c
	$(CC) $(COPT) ../src/h264bsd_slice_data.c

h264bsd_slice_group_map.o : ../src/h264bsd_slice_group_map.c
	$(CC) $(COPT) ../src/h264bsd_slice_group_map.c

h264bsd_slice_header.o : ../src/h264bsd_slice_header.c
	$(CC) $(COPT) ../src/h264bsd_slice_header.c

h264bsd_storage.o : ../src/h264bsd_storage.c
	$(CC) $(COPT) ../src/h264bsd_storage.c

h264bsd_stream.o : ../src/h264bsd_stream.c
	$(CC) $(COPT) ../src/h264bsd_stream.c

h264bsd_transform.o : ../src/h264bsd_transform.c
	$(CC) $(COPT) ../src/h264bsd_transform.c

h264bsd_util.o : ../src/h264bsd_util.c
	$(CC) $(COPT) ../src/h264bsd_util.c

h264bsd_vlc.o : ../src/h264bsd_vlc.c
	$(CC) $(COPT) ../src/h264bsd_vlc.c

h264bsd_vui.o : ../src/h264bsd_vui.c
	$(CC) $(COPT) ../src/h264bsd_vui.c
    
H264SwDecApi.o : ../src/H264SwDecApi.c
	$(CC) $(COPT) ../src/H264SwDecApi.c


TestBenchMultipleInstance.o : ../src/TestBenchMultipleInstance.c
	$(CC) $(COPT) ../src/TestBenchMultipleInstance.c
