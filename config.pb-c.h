/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: config.proto */

#ifndef PROTOBUF_C_config_2eproto__INCLUDED
#define PROTOBUF_C_config_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS
#if PROTOBUF_C_VERSION_NUMBER < 1000000
#error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
#error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif
typedef struct _Nsjail__NsJailConfig Nsjail__NsJailConfig;

/* --- enums --- */

typedef enum _Nsjail__Mode {
	NSJAIL__MODE__LISTEN = 0,
	NSJAIL__MODE__ONCE = 1,
	NSJAIL__MODE__RERUN = 2,
	NSJAIL__MODE__EXECVE = 3 PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(NSJAIL__MODE)
} Nsjail__Mode;

/* --- messages --- */

struct _Nsjail__NsJailConfig {
	ProtobufCMessage base;
	protobuf_c_boolean has_mode;
	Nsjail__Mode mode;
	protobuf_c_boolean has_chroot;
	ProtobufCBinaryData chroot;
	protobuf_c_boolean has_root_rw;
	protobuf_c_boolean root_rw;
};
#define NSJAIL__NS_JAIL_CONFIG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nsjail__ns_jail_config__descriptor) \
    , 0,0, 0,{0,NULL}, 0,0 }

/* Nsjail__NsJailConfig methods */
void nsjail__ns_jail_config__init(Nsjail__NsJailConfig * message);
size_t nsjail__ns_jail_config__get_packed_size(const Nsjail__NsJailConfig * message);
size_t nsjail__ns_jail_config__pack(const Nsjail__NsJailConfig * message, uint8_t * out);
size_t nsjail__ns_jail_config__pack_to_buffer
    (const Nsjail__NsJailConfig * message, ProtobufCBuffer * buffer);
Nsjail__NsJailConfig *nsjail__ns_jail_config__unpack
    (ProtobufCAllocator * allocator, size_t len, const uint8_t * data);
void nsjail__ns_jail_config__free_unpacked
    (Nsjail__NsJailConfig * message, ProtobufCAllocator * allocator);
/* --- per-message closures --- */

typedef void (*Nsjail__NsJailConfig_Closure)
 (const Nsjail__NsJailConfig * message, void *closure_data);

/* --- services --- */

/* --- descriptors --- */

extern const ProtobufCEnumDescriptor nsjail__mode__descriptor;
extern const ProtobufCMessageDescriptor nsjail__ns_jail_config__descriptor;

PROTOBUF_C__END_DECLS
#endif				/* PROTOBUF_C_config_2eproto__INCLUDED */