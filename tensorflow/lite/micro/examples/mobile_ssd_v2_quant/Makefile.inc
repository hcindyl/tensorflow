mobile_ssd_v2_quant_MODEL_SRCS := \
tensorflow/lite/micro/examples/mobile_ssd_v2_quant/mobile_ssd_v2_quant_model_data.cc

mobile_ssd_v2_quant_MODEL_HDRS := \
tensorflow/lite/micro/examples/mobile_ssd_v2_quant/model_settings.h \
tensorflow/lite/micro/examples/mobile_ssd_v2_quant/mobile_ssd_v2_quant_model_data.h

mobile_ssd_v2_quant_SRCS := \
tensorflow/lite/micro/examples/mobile_ssd_v2_quant/image_provider.cc \
tensorflow/lite/micro/examples/mobile_ssd_v2_quant/main.cc \
tensorflow/lite/micro/examples/mobile_ssd_v2_quant/main_functions.cc \
$(mobile_ssd_v2_quant_MODEL_SRCS)

mobile_ssd_v2_quant_HDRS := \
tensorflow/lite/micro/examples/mobile_ssd_v2_quant/image_provider.h \
tensorflow/lite/micro/examples/mobile_ssd_v2_quant/main_functions.h \
$(mobile_ssd_v2_quant_MODEL_HDRS)



#Find any platform - specific rules for this example.
include $(wildcard tensorflow/lite/micro/examples/mobile_ssd_v2_quant/*/Makefile.inc)

# Builds a standalone object recognition binary.
$(eval $(call microlite_test,mobile_ssd_v2_quant_uint8,\
$(mobile_ssd_v2_quant_SRCS),$(mobile_ssd_v2_quant_HDRS)))


list_mobile_ssd_v2_quant_example_sources:
	@echo $(mobile_ssd_v2_quant_SRCS)

list_mobile_ssd_v2_quant_example_headers:
	@echo $(mobile_ssd_v2_quant_HDRS)
