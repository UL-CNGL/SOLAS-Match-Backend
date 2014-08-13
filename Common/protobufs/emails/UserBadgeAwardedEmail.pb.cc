// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserBadgeAwardedEmail.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "UserBadgeAwardedEmail.pb.h"

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

const ::google::protobuf::Descriptor* UserBadgeAwardedEmail_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserBadgeAwardedEmail_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_UserBadgeAwardedEmail_2eproto() {
  protobuf_AddDesc_UserBadgeAwardedEmail_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "UserBadgeAwardedEmail.proto");
  GOOGLE_CHECK(file != NULL);
  UserBadgeAwardedEmail_descriptor_ = file->message_type(0);
  static const int UserBadgeAwardedEmail_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserBadgeAwardedEmail, email_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserBadgeAwardedEmail, user_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserBadgeAwardedEmail, badge_id_),
  };
  UserBadgeAwardedEmail_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      UserBadgeAwardedEmail_descriptor_,
      UserBadgeAwardedEmail::default_instance_,
      UserBadgeAwardedEmail_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserBadgeAwardedEmail, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserBadgeAwardedEmail, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(UserBadgeAwardedEmail));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_UserBadgeAwardedEmail_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    UserBadgeAwardedEmail_descriptor_, &UserBadgeAwardedEmail::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_UserBadgeAwardedEmail_2eproto() {
  delete UserBadgeAwardedEmail::default_instance_;
  delete UserBadgeAwardedEmail_reflection_;
}

void protobuf_AddDesc_UserBadgeAwardedEmail_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::SolasMatch::Common::Protobufs::Emails::protobuf_AddDesc_EmailMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033UserBadgeAwardedEmail.proto\022\"SolasMatc"
    "h.Common.Protobufs.Emails\032\022EmailMessage."
    "proto\"\234\001\n\025UserBadgeAwardedEmail\022`\n\nemail"
    "_type\030\001 \002(\01625.SolasMatch.Common.Protobuf"
    "s.Emails.EmailMessage.Type:\025UserBadgeAwa"
    "rdedEmail\022\017\n\007user_id\030\002 \002(\005\022\020\n\010badge_id\030\003"
    " \002(\005", 244);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "UserBadgeAwardedEmail.proto", &protobuf_RegisterTypes);
  UserBadgeAwardedEmail::default_instance_ = new UserBadgeAwardedEmail();
  UserBadgeAwardedEmail::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_UserBadgeAwardedEmail_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_UserBadgeAwardedEmail_2eproto {
  StaticDescriptorInitializer_UserBadgeAwardedEmail_2eproto() {
    protobuf_AddDesc_UserBadgeAwardedEmail_2eproto();
  }
} static_descriptor_initializer_UserBadgeAwardedEmail_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int UserBadgeAwardedEmail::kEmailTypeFieldNumber;
const int UserBadgeAwardedEmail::kUserIdFieldNumber;
const int UserBadgeAwardedEmail::kBadgeIdFieldNumber;
#endif  // !_MSC_VER

UserBadgeAwardedEmail::UserBadgeAwardedEmail()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void UserBadgeAwardedEmail::InitAsDefaultInstance() {
}

UserBadgeAwardedEmail::UserBadgeAwardedEmail(const UserBadgeAwardedEmail& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void UserBadgeAwardedEmail::SharedCtor() {
  _cached_size_ = 0;
  email_type_ = 22;
  user_id_ = 0;
  badge_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserBadgeAwardedEmail::~UserBadgeAwardedEmail() {
  SharedDtor();
}

void UserBadgeAwardedEmail::SharedDtor() {
  if (this != default_instance_) {
  }
}

void UserBadgeAwardedEmail::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserBadgeAwardedEmail::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserBadgeAwardedEmail_descriptor_;
}

const UserBadgeAwardedEmail& UserBadgeAwardedEmail::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_UserBadgeAwardedEmail_2eproto();
  return *default_instance_;
}

UserBadgeAwardedEmail* UserBadgeAwardedEmail::default_instance_ = NULL;

UserBadgeAwardedEmail* UserBadgeAwardedEmail::New() const {
  return new UserBadgeAwardedEmail;
}

void UserBadgeAwardedEmail::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    email_type_ = 22;
    user_id_ = 0;
    badge_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool UserBadgeAwardedEmail::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserBadgeAwardedEmail];
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
        if (input->ExpectTag(16)) goto parse_user_id;
        break;
      }

      // required int32 user_id = 2;
      case 2: {
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
        if (input->ExpectTag(24)) goto parse_badge_id;
        break;
      }

      // required int32 badge_id = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_badge_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &badge_id_)));
          set_has_badge_id();
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

void UserBadgeAwardedEmail::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserBadgeAwardedEmail];
  if (has_email_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->email_type(), output);
  }

  // required int32 user_id = 2;
  if (has_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->user_id(), output);
  }

  // required int32 badge_id = 3;
  if (has_badge_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->badge_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* UserBadgeAwardedEmail::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserBadgeAwardedEmail];
  if (has_email_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->email_type(), target);
  }

  // required int32 user_id = 2;
  if (has_user_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->user_id(), target);
  }

  // required int32 badge_id = 3;
  if (has_badge_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->badge_id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int UserBadgeAwardedEmail::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserBadgeAwardedEmail];
    if (has_email_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->email_type());
    }

    // required int32 user_id = 2;
    if (has_user_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->user_id());
    }

    // required int32 badge_id = 3;
    if (has_badge_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->badge_id());
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

void UserBadgeAwardedEmail::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const UserBadgeAwardedEmail* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const UserBadgeAwardedEmail*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void UserBadgeAwardedEmail::MergeFrom(const UserBadgeAwardedEmail& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_email_type()) {
      set_email_type(from.email_type());
    }
    if (from.has_user_id()) {
      set_user_id(from.user_id());
    }
    if (from.has_badge_id()) {
      set_badge_id(from.badge_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void UserBadgeAwardedEmail::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserBadgeAwardedEmail::CopyFrom(const UserBadgeAwardedEmail& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserBadgeAwardedEmail::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void UserBadgeAwardedEmail::Swap(UserBadgeAwardedEmail* other) {
  if (other != this) {
    std::swap(email_type_, other->email_type_);
    std::swap(user_id_, other->user_id_);
    std::swap(badge_id_, other->badge_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata UserBadgeAwardedEmail::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserBadgeAwardedEmail_descriptor_;
  metadata.reflection = UserBadgeAwardedEmail_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Emails
}  // namespace Protobufs
}  // namespace Common
}  // namespace SolasMatch

// @@protoc_insertion_point(global_scope)
