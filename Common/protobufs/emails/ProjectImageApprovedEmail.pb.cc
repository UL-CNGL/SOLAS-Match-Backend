// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProjectImageApprovedEmail.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ProjectImageApprovedEmail.pb.h"

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

const ::google::protobuf::Descriptor* ProjectImageApprovedEmail_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ProjectImageApprovedEmail_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ProjectImageApprovedEmail_2eproto() {
  protobuf_AddDesc_ProjectImageApprovedEmail_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ProjectImageApprovedEmail.proto");
  GOOGLE_CHECK(file != NULL);
  ProjectImageApprovedEmail_descriptor_ = file->message_type(0);
  static const int ProjectImageApprovedEmail_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProjectImageApprovedEmail, email_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProjectImageApprovedEmail, project_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProjectImageApprovedEmail, user_id_),
  };
  ProjectImageApprovedEmail_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ProjectImageApprovedEmail_descriptor_,
      ProjectImageApprovedEmail::default_instance_,
      ProjectImageApprovedEmail_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProjectImageApprovedEmail, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProjectImageApprovedEmail, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ProjectImageApprovedEmail));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ProjectImageApprovedEmail_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ProjectImageApprovedEmail_descriptor_, &ProjectImageApprovedEmail::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ProjectImageApprovedEmail_2eproto() {
  delete ProjectImageApprovedEmail::default_instance_;
  delete ProjectImageApprovedEmail_reflection_;
}

void protobuf_AddDesc_ProjectImageApprovedEmail_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::SolasMatch::Common::Protobufs::Emails::protobuf_AddDesc_EmailMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\037ProjectImageApprovedEmail.proto\022\"Solas"
    "Match.Common.Protobufs.Emails\032\022EmailMess"
    "age.proto\"\246\001\n\031ProjectImageApprovedEmail\022"
    "d\n\nemail_type\030\001 \002(\01625.SolasMatch.Common."
    "Protobufs.Emails.EmailMessage.Type:\031Proj"
    "ectImageApprovedEmail\022\022\n\nproject_id\030\002 \002("
    "\005\022\017\n\007user_id\030\003 \002(\005", 258);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ProjectImageApprovedEmail.proto", &protobuf_RegisterTypes);
  ProjectImageApprovedEmail::default_instance_ = new ProjectImageApprovedEmail();
  ProjectImageApprovedEmail::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ProjectImageApprovedEmail_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ProjectImageApprovedEmail_2eproto {
  StaticDescriptorInitializer_ProjectImageApprovedEmail_2eproto() {
    protobuf_AddDesc_ProjectImageApprovedEmail_2eproto();
  }
} static_descriptor_initializer_ProjectImageApprovedEmail_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ProjectImageApprovedEmail::kEmailTypeFieldNumber;
const int ProjectImageApprovedEmail::kProjectIdFieldNumber;
const int ProjectImageApprovedEmail::kUserIdFieldNumber;
#endif  // !_MSC_VER

ProjectImageApprovedEmail::ProjectImageApprovedEmail()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ProjectImageApprovedEmail::InitAsDefaultInstance() {
}

ProjectImageApprovedEmail::ProjectImageApprovedEmail(const ProjectImageApprovedEmail& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ProjectImageApprovedEmail::SharedCtor() {
  _cached_size_ = 0;
  email_type_ = 31;
  project_id_ = 0;
  user_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ProjectImageApprovedEmail::~ProjectImageApprovedEmail() {
  SharedDtor();
}

void ProjectImageApprovedEmail::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ProjectImageApprovedEmail::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProjectImageApprovedEmail::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ProjectImageApprovedEmail_descriptor_;
}

const ProjectImageApprovedEmail& ProjectImageApprovedEmail::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ProjectImageApprovedEmail_2eproto();
  return *default_instance_;
}

ProjectImageApprovedEmail* ProjectImageApprovedEmail::default_instance_ = NULL;

ProjectImageApprovedEmail* ProjectImageApprovedEmail::New() const {
  return new ProjectImageApprovedEmail;
}

void ProjectImageApprovedEmail::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    email_type_ = 31;
    project_id_ = 0;
    user_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ProjectImageApprovedEmail::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = ProjectImageApprovedEmail];
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
        if (input->ExpectTag(16)) goto parse_project_id;
        break;
      }

      // required int32 project_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_project_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &project_id_)));
          set_has_project_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_user_id;
        break;
      }

      // required int32 user_id = 3;
      case 3: {
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

void ProjectImageApprovedEmail::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = ProjectImageApprovedEmail];
  if (has_email_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->email_type(), output);
  }

  // required int32 project_id = 2;
  if (has_project_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->project_id(), output);
  }

  // required int32 user_id = 3;
  if (has_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->user_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ProjectImageApprovedEmail::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = ProjectImageApprovedEmail];
  if (has_email_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->email_type(), target);
  }

  // required int32 project_id = 2;
  if (has_project_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->project_id(), target);
  }

  // required int32 user_id = 3;
  if (has_user_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->user_id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ProjectImageApprovedEmail::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = ProjectImageApprovedEmail];
    if (has_email_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->email_type());
    }

    // required int32 project_id = 2;
    if (has_project_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->project_id());
    }

    // required int32 user_id = 3;
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

void ProjectImageApprovedEmail::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ProjectImageApprovedEmail* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ProjectImageApprovedEmail*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ProjectImageApprovedEmail::MergeFrom(const ProjectImageApprovedEmail& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_email_type()) {
      set_email_type(from.email_type());
    }
    if (from.has_project_id()) {
      set_project_id(from.project_id());
    }
    if (from.has_user_id()) {
      set_user_id(from.user_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ProjectImageApprovedEmail::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProjectImageApprovedEmail::CopyFrom(const ProjectImageApprovedEmail& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProjectImageApprovedEmail::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void ProjectImageApprovedEmail::Swap(ProjectImageApprovedEmail* other) {
  if (other != this) {
    std::swap(email_type_, other->email_type_);
    std::swap(project_id_, other->project_id_);
    std::swap(user_id_, other->user_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ProjectImageApprovedEmail::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ProjectImageApprovedEmail_descriptor_;
  metadata.reflection = ProjectImageApprovedEmail_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Emails
}  // namespace Protobufs
}  // namespace Common
}  // namespace SolasMatch

// @@protoc_insertion_point(global_scope)
