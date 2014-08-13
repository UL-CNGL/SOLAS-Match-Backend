// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OrgTaskRevokedEmail.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "OrgTaskRevokedEmail.pb.h"

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
namespace Emails {

namespace {

const ::google::protobuf::Descriptor* OrgTaskRevokedEmail_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OrgTaskRevokedEmail_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_OrgTaskRevokedEmail_2eproto() {
  protobuf_AddDesc_OrgTaskRevokedEmail_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "OrgTaskRevokedEmail.proto");
  GOOGLE_CHECK(file != NULL);
  OrgTaskRevokedEmail_descriptor_ = file->message_type(0);
  static const int OrgTaskRevokedEmail_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgTaskRevokedEmail, email_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgTaskRevokedEmail, task_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgTaskRevokedEmail, claimant_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgTaskRevokedEmail, user_id_),
  };
  OrgTaskRevokedEmail_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      OrgTaskRevokedEmail_descriptor_,
      OrgTaskRevokedEmail::default_instance_,
      OrgTaskRevokedEmail_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgTaskRevokedEmail, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgTaskRevokedEmail, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(OrgTaskRevokedEmail));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_OrgTaskRevokedEmail_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    OrgTaskRevokedEmail_descriptor_, &OrgTaskRevokedEmail::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_OrgTaskRevokedEmail_2eproto() {
  delete OrgTaskRevokedEmail::default_instance_;
  delete OrgTaskRevokedEmail_reflection_;
}

void protobuf_AddDesc_OrgTaskRevokedEmail_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::SolasMatch::Common::Protobufs::Emails::protobuf_AddDesc_EmailMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031OrgTaskRevokedEmail.proto\022\"SolasMatch."
    "Common.Protobufs.Emails\032\022EmailMessage.pr"
    "oto\"\254\001\n\023OrgTaskRevokedEmail\022^\n\nemail_typ"
    "e\030\001 \002(\01625.SolasMatch.Common.Protobufs.Em"
    "ails.EmailMessage.Type:\023OrgTaskRevokedEm"
    "ail\022\017\n\007task_id\030\002 \002(\005\022\023\n\013claimant_id\030\003 \002("
    "\005\022\017\n\007user_id\030\004 \002(\005", 258);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "OrgTaskRevokedEmail.proto", &protobuf_RegisterTypes);
  OrgTaskRevokedEmail::default_instance_ = new OrgTaskRevokedEmail();
  OrgTaskRevokedEmail::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_OrgTaskRevokedEmail_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_OrgTaskRevokedEmail_2eproto {
  StaticDescriptorInitializer_OrgTaskRevokedEmail_2eproto() {
    protobuf_AddDesc_OrgTaskRevokedEmail_2eproto();
  }
} static_descriptor_initializer_OrgTaskRevokedEmail_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int OrgTaskRevokedEmail::kEmailTypeFieldNumber;
const int OrgTaskRevokedEmail::kTaskIdFieldNumber;
const int OrgTaskRevokedEmail::kClaimantIdFieldNumber;
const int OrgTaskRevokedEmail::kUserIdFieldNumber;
#endif  // !_MSC_VER

OrgTaskRevokedEmail::OrgTaskRevokedEmail()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void OrgTaskRevokedEmail::InitAsDefaultInstance() {
}

OrgTaskRevokedEmail::OrgTaskRevokedEmail(const OrgTaskRevokedEmail& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void OrgTaskRevokedEmail::SharedCtor() {
  _cached_size_ = 0;
  email_type_ = 25;
  task_id_ = 0;
  claimant_id_ = 0;
  user_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OrgTaskRevokedEmail::~OrgTaskRevokedEmail() {
  SharedDtor();
}

void OrgTaskRevokedEmail::SharedDtor() {
  if (this != default_instance_) {
  }
}

void OrgTaskRevokedEmail::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OrgTaskRevokedEmail::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OrgTaskRevokedEmail_descriptor_;
}

const OrgTaskRevokedEmail& OrgTaskRevokedEmail::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_OrgTaskRevokedEmail_2eproto();
  return *default_instance_;
}

OrgTaskRevokedEmail* OrgTaskRevokedEmail::default_instance_ = NULL;

OrgTaskRevokedEmail* OrgTaskRevokedEmail::New() const {
  return new OrgTaskRevokedEmail;
}

void OrgTaskRevokedEmail::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    email_type_ = 25;
    task_id_ = 0;
    claimant_id_ = 0;
    user_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool OrgTaskRevokedEmail::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = OrgTaskRevokedEmail];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type_IsValid(value)) {
            set_email_type(static_cast< ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_task_id;
        break;
      }

      // required int32 task_id = 2;
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
        if (input->ExpectTag(24)) goto parse_claimant_id;
        break;
      }

      // required int32 claimant_id = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_claimant_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &claimant_id_)));
          set_has_claimant_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_user_id;
        break;
      }

      // required int32 user_id = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_user_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &user_id_)));
          set_has_user_id();
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

void OrgTaskRevokedEmail::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = OrgTaskRevokedEmail];
  if (has_email_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->email_type(), output);
  }

  // required int32 task_id = 2;
  if (has_task_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->task_id(), output);
  }

  // required int32 claimant_id = 3;
  if (has_claimant_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->claimant_id(), output);
  }

  // required int32 user_id = 4;
  if (has_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->user_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* OrgTaskRevokedEmail::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = OrgTaskRevokedEmail];
  if (has_email_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->email_type(), target);
  }

  // required int32 task_id = 2;
  if (has_task_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->task_id(), target);
  }

  // required int32 claimant_id = 3;
  if (has_claimant_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->claimant_id(), target);
  }

  // required int32 user_id = 4;
  if (has_user_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->user_id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int OrgTaskRevokedEmail::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = OrgTaskRevokedEmail];
    if (has_email_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->email_type());
    }

    // required int32 task_id = 2;
    if (has_task_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->task_id());
    }

    // required int32 claimant_id = 3;
    if (has_claimant_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->claimant_id());
    }

    // required int32 user_id = 4;
    if (has_user_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->user_id());
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

void OrgTaskRevokedEmail::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const OrgTaskRevokedEmail* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const OrgTaskRevokedEmail*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void OrgTaskRevokedEmail::MergeFrom(const OrgTaskRevokedEmail& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_email_type()) {
      set_email_type(from.email_type());
    }
    if (from.has_task_id()) {
      set_task_id(from.task_id());
    }
    if (from.has_claimant_id()) {
      set_claimant_id(from.claimant_id());
    }
    if (from.has_user_id()) {
      set_user_id(from.user_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void OrgTaskRevokedEmail::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OrgTaskRevokedEmail::CopyFrom(const OrgTaskRevokedEmail& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OrgTaskRevokedEmail::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void OrgTaskRevokedEmail::Swap(OrgTaskRevokedEmail* other) {
  if (other != this) {
    std::swap(email_type_, other->email_type_);
    std::swap(task_id_, other->task_id_);
    std::swap(claimant_id_, other->claimant_id_);
    std::swap(user_id_, other->user_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata OrgTaskRevokedEmail::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OrgTaskRevokedEmail_descriptor_;
  metadata.reflection = OrgTaskRevokedEmail_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Emails
}  // namespace Protobufs
}  // namespace Common
}  // namespace SolasMatch

// @@protoc_insertion_point(global_scope)
