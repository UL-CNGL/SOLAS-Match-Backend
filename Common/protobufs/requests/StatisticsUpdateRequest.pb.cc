// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: StatisticsUpdateRequest.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "StatisticsUpdateRequest.pb.h"

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

const ::google::protobuf::Descriptor* StatisticsUpdateRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  StatisticsUpdateRequest_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_StatisticsUpdateRequest_2eproto() {
  protobuf_AddDesc_StatisticsUpdateRequest_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "StatisticsUpdateRequest.proto");
  GOOGLE_CHECK(file != NULL);
  StatisticsUpdateRequest_descriptor_ = file->message_type(0);
  static const int StatisticsUpdateRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatisticsUpdateRequest, class_name_),
  };
  StatisticsUpdateRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      StatisticsUpdateRequest_descriptor_,
      StatisticsUpdateRequest::default_instance_,
      StatisticsUpdateRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatisticsUpdateRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatisticsUpdateRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(StatisticsUpdateRequest));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_StatisticsUpdateRequest_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    StatisticsUpdateRequest_descriptor_, &StatisticsUpdateRequest::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_StatisticsUpdateRequest_2eproto() {
  delete StatisticsUpdateRequest::default_instance_;
  delete StatisticsUpdateRequest_reflection_;
  delete StatisticsUpdateRequest::_default_class_name_;
}

void protobuf_AddDesc_StatisticsUpdateRequest_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\035StatisticsUpdateRequest.proto\022$SolasMa"
    "tch.Common.Protobufs.Requests\"F\n\027Statist"
    "icsUpdateRequest\022+\n\nclass_name\030\001 \002(\t:\027St"
    "atisticsUpdateRequest", 141);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "StatisticsUpdateRequest.proto", &protobuf_RegisterTypes);
  StatisticsUpdateRequest::_default_class_name_ =
      new ::std::string("StatisticsUpdateRequest", 23);
  StatisticsUpdateRequest::default_instance_ = new StatisticsUpdateRequest();
  StatisticsUpdateRequest::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_StatisticsUpdateRequest_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_StatisticsUpdateRequest_2eproto {
  StaticDescriptorInitializer_StatisticsUpdateRequest_2eproto() {
    protobuf_AddDesc_StatisticsUpdateRequest_2eproto();
  }
} static_descriptor_initializer_StatisticsUpdateRequest_2eproto_;

// ===================================================================

::std::string* StatisticsUpdateRequest::_default_class_name_ = NULL;
#ifndef _MSC_VER
const int StatisticsUpdateRequest::kClassNameFieldNumber;
#endif  // !_MSC_VER

StatisticsUpdateRequest::StatisticsUpdateRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void StatisticsUpdateRequest::InitAsDefaultInstance() {
}

StatisticsUpdateRequest::StatisticsUpdateRequest(const StatisticsUpdateRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void StatisticsUpdateRequest::SharedCtor() {
  _cached_size_ = 0;
  class_name_ = const_cast< ::std::string*>(_default_class_name_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

StatisticsUpdateRequest::~StatisticsUpdateRequest() {
  SharedDtor();
}

void StatisticsUpdateRequest::SharedDtor() {
  if (class_name_ != _default_class_name_) {
    delete class_name_;
  }
  if (this != default_instance_) {
  }
}

void StatisticsUpdateRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* StatisticsUpdateRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return StatisticsUpdateRequest_descriptor_;
}

const StatisticsUpdateRequest& StatisticsUpdateRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_StatisticsUpdateRequest_2eproto();
  return *default_instance_;
}

StatisticsUpdateRequest* StatisticsUpdateRequest::default_instance_ = NULL;

StatisticsUpdateRequest* StatisticsUpdateRequest::New() const {
  return new StatisticsUpdateRequest;
}

void StatisticsUpdateRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_class_name()) {
      if (class_name_ != _default_class_name_) {
        class_name_->assign(*_default_class_name_);
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool StatisticsUpdateRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string class_name = 1 [default = "StatisticsUpdateRequest"];
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

void StatisticsUpdateRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string class_name = 1 [default = "StatisticsUpdateRequest"];
  if (has_class_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->class_name().data(), this->class_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->class_name(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* StatisticsUpdateRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string class_name = 1 [default = "StatisticsUpdateRequest"];
  if (has_class_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->class_name().data(), this->class_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->class_name(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int StatisticsUpdateRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string class_name = 1 [default = "StatisticsUpdateRequest"];
    if (has_class_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->class_name());
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

void StatisticsUpdateRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const StatisticsUpdateRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const StatisticsUpdateRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void StatisticsUpdateRequest::MergeFrom(const StatisticsUpdateRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_class_name()) {
      set_class_name(from.class_name());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void StatisticsUpdateRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StatisticsUpdateRequest::CopyFrom(const StatisticsUpdateRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StatisticsUpdateRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void StatisticsUpdateRequest::Swap(StatisticsUpdateRequest* other) {
  if (other != this) {
    std::swap(class_name_, other->class_name_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata StatisticsUpdateRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = StatisticsUpdateRequest_descriptor_;
  metadata.reflection = StatisticsUpdateRequest_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Requests
}  // namespace Protobufs
}  // namespace Common
}  // namespace SolasMatch

// @@protoc_insertion_point(global_scope)
