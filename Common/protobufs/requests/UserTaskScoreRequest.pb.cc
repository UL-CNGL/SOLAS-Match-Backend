// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserTaskScoreRequest.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "UserTaskScoreRequest.pb.h"

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

const ::google::protobuf::Descriptor* UserTaskScoreRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserTaskScoreRequest_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_UserTaskScoreRequest_2eproto() {
  protobuf_AddDesc_UserTaskScoreRequest_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "UserTaskScoreRequest.proto");
  GOOGLE_CHECK(file != NULL);
  UserTaskScoreRequest_descriptor_ = file->message_type(0);
  static const int UserTaskScoreRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskScoreRequest, class_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskScoreRequest, task_id_),
  };
  UserTaskScoreRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      UserTaskScoreRequest_descriptor_,
      UserTaskScoreRequest::default_instance_,
      UserTaskScoreRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskScoreRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskScoreRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(UserTaskScoreRequest));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_UserTaskScoreRequest_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    UserTaskScoreRequest_descriptor_, &UserTaskScoreRequest::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_UserTaskScoreRequest_2eproto() {
  delete UserTaskScoreRequest::default_instance_;
  delete UserTaskScoreRequest_reflection_;
  delete UserTaskScoreRequest::_default_class_name_;
}

void protobuf_AddDesc_UserTaskScoreRequest_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032UserTaskScoreRequest.proto\022$SolasMatch"
    ".Common.Protobufs.Requests\"Q\n\024UserTaskSc"
    "oreRequest\022(\n\nclass_name\030\001 \002(\t:\024UserTask"
    "ScoreRequest\022\017\n\007task_id\030\002 \001(\005", 149);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "UserTaskScoreRequest.proto", &protobuf_RegisterTypes);
  UserTaskScoreRequest::_default_class_name_ =
      new ::std::string("UserTaskScoreRequest", 20);
  UserTaskScoreRequest::default_instance_ = new UserTaskScoreRequest();
  UserTaskScoreRequest::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_UserTaskScoreRequest_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_UserTaskScoreRequest_2eproto {
  StaticDescriptorInitializer_UserTaskScoreRequest_2eproto() {
    protobuf_AddDesc_UserTaskScoreRequest_2eproto();
  }
} static_descriptor_initializer_UserTaskScoreRequest_2eproto_;

// ===================================================================

::std::string* UserTaskScoreRequest::_default_class_name_ = NULL;
#ifndef _MSC_VER
const int UserTaskScoreRequest::kClassNameFieldNumber;
const int UserTaskScoreRequest::kTaskIdFieldNumber;
#endif  // !_MSC_VER

UserTaskScoreRequest::UserTaskScoreRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void UserTaskScoreRequest::InitAsDefaultInstance() {
}

UserTaskScoreRequest::UserTaskScoreRequest(const UserTaskScoreRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void UserTaskScoreRequest::SharedCtor() {
  _cached_size_ = 0;
  class_name_ = const_cast< ::std::string*>(_default_class_name_);
  task_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserTaskScoreRequest::~UserTaskScoreRequest() {
  SharedDtor();
}

void UserTaskScoreRequest::SharedDtor() {
  if (class_name_ != _default_class_name_) {
    delete class_name_;
  }
  if (this != default_instance_) {
  }
}

void UserTaskScoreRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserTaskScoreRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserTaskScoreRequest_descriptor_;
}

const UserTaskScoreRequest& UserTaskScoreRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_UserTaskScoreRequest_2eproto();
  return *default_instance_;
}

UserTaskScoreRequest* UserTaskScoreRequest::default_instance_ = NULL;

UserTaskScoreRequest* UserTaskScoreRequest::New() const {
  return new UserTaskScoreRequest;
}

void UserTaskScoreRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_class_name()) {
      if (class_name_ != _default_class_name_) {
        class_name_->assign(*_default_class_name_);
      }
    }
    task_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool UserTaskScoreRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string class_name = 1 [default = "UserTaskScoreRequest"];
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
        if (input->ExpectTag(16)) goto parse_task_id;
        break;
      }

      // optional int32 task_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_task_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &task_id_)));
          set_has_task_id();
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

void UserTaskScoreRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string class_name = 1 [default = "UserTaskScoreRequest"];
  if (has_class_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->class_name().data(), this->class_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->class_name(), output);
  }

  // optional int32 task_id = 2;
  if (has_task_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->task_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* UserTaskScoreRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string class_name = 1 [default = "UserTaskScoreRequest"];
  if (has_class_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->class_name().data(), this->class_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->class_name(), target);
  }

  // optional int32 task_id = 2;
  if (has_task_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->task_id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int UserTaskScoreRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string class_name = 1 [default = "UserTaskScoreRequest"];
    if (has_class_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->class_name());
    }

    // optional int32 task_id = 2;
    if (has_task_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->task_id());
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

void UserTaskScoreRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const UserTaskScoreRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const UserTaskScoreRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void UserTaskScoreRequest::MergeFrom(const UserTaskScoreRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_class_name()) {
      set_class_name(from.class_name());
    }
    if (from.has_task_id()) {
      set_task_id(from.task_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void UserTaskScoreRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserTaskScoreRequest::CopyFrom(const UserTaskScoreRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserTaskScoreRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void UserTaskScoreRequest::Swap(UserTaskScoreRequest* other) {
  if (other != this) {
    std::swap(class_name_, other->class_name_);
    std::swap(task_id_, other->task_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata UserTaskScoreRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserTaskScoreRequest_descriptor_;
  metadata.reflection = UserTaskScoreRequest_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Requests
}  // namespace Protobufs
}  // namespace Common
}  // namespace SolasMatch

// @@protoc_insertion_point(global_scope)
