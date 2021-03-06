// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OrgCreatedNotificationRequest.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "OrgCreatedNotificationRequest.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace SolasMatch {
namespace Common {
namespace Protobufs {
namespace Requests {

namespace {

const ::google::protobuf::Descriptor* OrgCreatedNotificationRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OrgCreatedNotificationRequest_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_OrgCreatedNotificationRequest_2eproto() {
  protobuf_AddDesc_OrgCreatedNotificationRequest_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "OrgCreatedNotificationRequest.proto");
  GOOGLE_CHECK(file != NULL);
  OrgCreatedNotificationRequest_descriptor_ = file->message_type(0);
  static const int OrgCreatedNotificationRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgCreatedNotificationRequest, class_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgCreatedNotificationRequest, org_id_),
  };
  OrgCreatedNotificationRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      OrgCreatedNotificationRequest_descriptor_,
      OrgCreatedNotificationRequest::default_instance_,
      OrgCreatedNotificationRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgCreatedNotificationRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgCreatedNotificationRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(OrgCreatedNotificationRequest));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_OrgCreatedNotificationRequest_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    OrgCreatedNotificationRequest_descriptor_, &OrgCreatedNotificationRequest::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_OrgCreatedNotificationRequest_2eproto() {
  delete OrgCreatedNotificationRequest::default_instance_;
  delete OrgCreatedNotificationRequest_reflection_;
  delete OrgCreatedNotificationRequest::_default_class_name_;
}

void protobuf_AddDesc_OrgCreatedNotificationRequest_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n#OrgCreatedNotificationRequest.proto\022$S"
    "olasMatch.Common.Protobufs.Requests\"b\n\035O"
    "rgCreatedNotificationRequest\0221\n\nclass_na"
    "me\030\001 \002(\t:\035OrgCreatedNotificationRequest\022"
    "\016\n\006org_id\030\002 \002(\005", 175);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "OrgCreatedNotificationRequest.proto", &protobuf_RegisterTypes);
  OrgCreatedNotificationRequest::_default_class_name_ =
      new ::std::string("OrgCreatedNotificationRequest", 29);
  OrgCreatedNotificationRequest::default_instance_ = new OrgCreatedNotificationRequest();
  OrgCreatedNotificationRequest::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_OrgCreatedNotificationRequest_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_OrgCreatedNotificationRequest_2eproto {
  StaticDescriptorInitializer_OrgCreatedNotificationRequest_2eproto() {
    protobuf_AddDesc_OrgCreatedNotificationRequest_2eproto();
  }
} static_descriptor_initializer_OrgCreatedNotificationRequest_2eproto_;

// ===================================================================

::std::string* OrgCreatedNotificationRequest::_default_class_name_ = NULL;
#ifndef _MSC_VER
const int OrgCreatedNotificationRequest::kClassNameFieldNumber;
const int OrgCreatedNotificationRequest::kOrgIdFieldNumber;
#endif  // !_MSC_VER

OrgCreatedNotificationRequest::OrgCreatedNotificationRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void OrgCreatedNotificationRequest::InitAsDefaultInstance() {
}

OrgCreatedNotificationRequest::OrgCreatedNotificationRequest(const OrgCreatedNotificationRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void OrgCreatedNotificationRequest::SharedCtor() {
  _cached_size_ = 0;
  class_name_ = const_cast< ::std::string*>(_default_class_name_);
  org_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OrgCreatedNotificationRequest::~OrgCreatedNotificationRequest() {
  SharedDtor();
}

void OrgCreatedNotificationRequest::SharedDtor() {
  if (class_name_ != _default_class_name_) {
    delete class_name_;
  }
  if (this != default_instance_) {
  }
}

void OrgCreatedNotificationRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OrgCreatedNotificationRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OrgCreatedNotificationRequest_descriptor_;
}

const OrgCreatedNotificationRequest& OrgCreatedNotificationRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_OrgCreatedNotificationRequest_2eproto();
  return *default_instance_;
}

OrgCreatedNotificationRequest* OrgCreatedNotificationRequest::default_instance_ = NULL;

OrgCreatedNotificationRequest* OrgCreatedNotificationRequest::New() const {
  return new OrgCreatedNotificationRequest;
}

void OrgCreatedNotificationRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_class_name()) {
      if (class_name_ != _default_class_name_) {
        class_name_->assign(*_default_class_name_);
      }
    }
    org_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool OrgCreatedNotificationRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string class_name = 1 [default = "OrgCreatedNotificationRequest"];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_class_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->class_name().data(), this->class_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_org_id;
        break;
      }

      // required int32 org_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_org_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &org_id_)));
          set_has_org_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void OrgCreatedNotificationRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string class_name = 1 [default = "OrgCreatedNotificationRequest"];
  if (has_class_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->class_name().data(), this->class_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->class_name(), output);
  }

  // required int32 org_id = 2;
  if (has_org_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->org_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* OrgCreatedNotificationRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string class_name = 1 [default = "OrgCreatedNotificationRequest"];
  if (has_class_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->class_name().data(), this->class_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->class_name(), target);
  }

  // required int32 org_id = 2;
  if (has_org_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->org_id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int OrgCreatedNotificationRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string class_name = 1 [default = "OrgCreatedNotificationRequest"];
    if (has_class_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->class_name());
    }

    // required int32 org_id = 2;
    if (has_org_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->org_id());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OrgCreatedNotificationRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const OrgCreatedNotificationRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const OrgCreatedNotificationRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void OrgCreatedNotificationRequest::MergeFrom(const OrgCreatedNotificationRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_class_name()) {
      set_class_name(from.class_name());
    }
    if (from.has_org_id()) {
      set_org_id(from.org_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void OrgCreatedNotificationRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OrgCreatedNotificationRequest::CopyFrom(const OrgCreatedNotificationRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OrgCreatedNotificationRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void OrgCreatedNotificationRequest::Swap(OrgCreatedNotificationRequest* other) {
  if (other != this) {
    std::swap(class_name_, other->class_name_);
    std::swap(org_id_, other->org_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata OrgCreatedNotificationRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OrgCreatedNotificationRequest_descriptor_;
  metadata.reflection = OrgCreatedNotificationRequest_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Requests
}  // namespace Protobufs
}  // namespace Common
}  // namespace SolasMatch

// @@protoc_insertion_point(global_scope)
