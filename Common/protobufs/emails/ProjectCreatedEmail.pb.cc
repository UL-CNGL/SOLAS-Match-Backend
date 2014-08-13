// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProjectCreatedEmail.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ProjectCreatedEmail.pb.h"

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

const ::google::protobuf::Descriptor* ProjectCreatedEmail_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ProjectCreatedEmail_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ProjectCreatedEmail_2eproto() {
  protobuf_AddDesc_ProjectCreatedEmail_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ProjectCreatedEmail.proto");
  GOOGLE_CHECK(file != NULL);
  ProjectCreatedEmail_descriptor_ = file->message_type(0);
  static const int ProjectCreatedEmail_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProjectCreatedEmail, email_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProjectCreatedEmail, recipient_email_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProjectCreatedEmail, project_id_),
  };
  ProjectCreatedEmail_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ProjectCreatedEmail_descriptor_,
      ProjectCreatedEmail::default_instance_,
      ProjectCreatedEmail_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProjectCreatedEmail, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProjectCreatedEmail, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ProjectCreatedEmail));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ProjectCreatedEmail_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ProjectCreatedEmail_descriptor_, &ProjectCreatedEmail::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ProjectCreatedEmail_2eproto() {
  delete ProjectCreatedEmail::default_instance_;
  delete ProjectCreatedEmail_reflection_;
}

void protobuf_AddDesc_ProjectCreatedEmail_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::SolasMatch::Common::Protobufs::Emails::protobuf_AddDesc_EmailMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031ProjectCreatedEmail.proto\022\"SolasMatch."
    "Common.Protobufs.Emails\032\022EmailMessage.pr"
    "oto\"\235\001\n\023ProjectCreatedEmail\022Y\n\nemail_typ"
    "e\030\001 \002(\01625.SolasMatch.Common.Protobufs.Em"
    "ails.EmailMessage.Type:\016ProjectCreated\022\027"
    "\n\017recipient_email\030\002 \002(\t\022\022\n\nproject_id\030\003 "
    "\002(\005", 243);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ProjectCreatedEmail.proto", &protobuf_RegisterTypes);
  ProjectCreatedEmail::default_instance_ = new ProjectCreatedEmail();
  ProjectCreatedEmail::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ProjectCreatedEmail_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ProjectCreatedEmail_2eproto {
  StaticDescriptorInitializer_ProjectCreatedEmail_2eproto() {
    protobuf_AddDesc_ProjectCreatedEmail_2eproto();
  }
} static_descriptor_initializer_ProjectCreatedEmail_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ProjectCreatedEmail::kEmailTypeFieldNumber;
const int ProjectCreatedEmail::kRecipientEmailFieldNumber;
const int ProjectCreatedEmail::kProjectIdFieldNumber;
#endif  // !_MSC_VER

ProjectCreatedEmail::ProjectCreatedEmail()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ProjectCreatedEmail::InitAsDefaultInstance() {
}

ProjectCreatedEmail::ProjectCreatedEmail(const ProjectCreatedEmail& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ProjectCreatedEmail::SharedCtor() {
  _cached_size_ = 0;
  email_type_ = 26;
  recipient_email_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  project_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ProjectCreatedEmail::~ProjectCreatedEmail() {
  SharedDtor();
}

void ProjectCreatedEmail::SharedDtor() {
  if (recipient_email_ != &::google::protobuf::internal::kEmptyString) {
    delete recipient_email_;
  }
  if (this != default_instance_) {
  }
}

void ProjectCreatedEmail::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProjectCreatedEmail::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ProjectCreatedEmail_descriptor_;
}

const ProjectCreatedEmail& ProjectCreatedEmail::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ProjectCreatedEmail_2eproto();
  return *default_instance_;
}

ProjectCreatedEmail* ProjectCreatedEmail::default_instance_ = NULL;

ProjectCreatedEmail* ProjectCreatedEmail::New() const {
  return new ProjectCreatedEmail;
}

void ProjectCreatedEmail::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    email_type_ = 26;
    if (has_recipient_email()) {
      if (recipient_email_ != &::google::protobuf::internal::kEmptyString) {
        recipient_email_->clear();
      }
    }
    project_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ProjectCreatedEmail::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = ProjectCreated];
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
        if (input->ExpectTag(18)) goto parse_recipient_email;
        break;
      }

      // required string recipient_email = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_recipient_email:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_recipient_email()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->recipient_email().data(), this->recipient_email().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_project_id;
        break;
      }

      // required int32 project_id = 3;
      case 3: {
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

void ProjectCreatedEmail::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = ProjectCreated];
  if (has_email_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->email_type(), output);
  }

  // required string recipient_email = 2;
  if (has_recipient_email()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->recipient_email().data(), this->recipient_email().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->recipient_email(), output);
  }

  // required int32 project_id = 3;
  if (has_project_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->project_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ProjectCreatedEmail::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = ProjectCreated];
  if (has_email_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->email_type(), target);
  }

  // required string recipient_email = 2;
  if (has_recipient_email()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->recipient_email().data(), this->recipient_email().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->recipient_email(), target);
  }

  // required int32 project_id = 3;
  if (has_project_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->project_id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ProjectCreatedEmail::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = ProjectCreated];
    if (has_email_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->email_type());
    }

    // required string recipient_email = 2;
    if (has_recipient_email()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->recipient_email());
    }

    // required int32 project_id = 3;
    if (has_project_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->project_id());
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

void ProjectCreatedEmail::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ProjectCreatedEmail* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ProjectCreatedEmail*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ProjectCreatedEmail::MergeFrom(const ProjectCreatedEmail& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_email_type()) {
      set_email_type(from.email_type());
    }
    if (from.has_recipient_email()) {
      set_recipient_email(from.recipient_email());
    }
    if (from.has_project_id()) {
      set_project_id(from.project_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ProjectCreatedEmail::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProjectCreatedEmail::CopyFrom(const ProjectCreatedEmail& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProjectCreatedEmail::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void ProjectCreatedEmail::Swap(ProjectCreatedEmail* other) {
  if (other != this) {
    std::swap(email_type_, other->email_type_);
    std::swap(recipient_email_, other->recipient_email_);
    std::swap(project_id_, other->project_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ProjectCreatedEmail::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ProjectCreatedEmail_descriptor_;
  metadata.reflection = ProjectCreatedEmail_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Emails
}  // namespace Protobufs
}  // namespace Common
}  // namespace SolasMatch

// @@protoc_insertion_point(global_scope)
