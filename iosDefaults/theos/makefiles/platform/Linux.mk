ifeq ($(FW_PLATFORM_LOADED),)
FW_PLATFORM_LOADED := 1
FW_PLATFORM_NAME := linux

FW_PLATFORM_DEFAULT_TARGET := iphone
DU_EXCLUDE = --exclude
endif
