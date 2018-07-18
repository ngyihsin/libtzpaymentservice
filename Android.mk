LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)
LOCAL_SRC_FILES := libtzpaymentservice.c
LOCAL_MODULE := libtzpaymentservice
LOCAL_MODULE_TAGS := optional

LOCAL_SHARED_LIBRARIES += \
    libcutils \
    libutils \
    liblog

include $(BUILD_SHARED_LIBRARY)
