// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProjectImageUploadedEmail.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ProjectImageUploadedEmail.pb.h"

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

const ::google::protobuf::Descriptor* ProjectImageUploadedEmail_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ProjectImageUploadedEmail_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ProjectImageUploadedEmail_2eproto() {
  protobuf_AddDesc_ProjectImageUploadedEmail_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ProjectImageUploadedEmail.proto");
  GOOGLE_CHECK(file != NULL);
  ProjectImageUploadedEmail_descriptor_ = file->message_type(0);
  static const int ProjectImageUploadedEmail_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProjectImageUploadedEmail, email_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProjectImageUploadedEmail, project_id_),
  };
  ProjectImageUploadedEmail_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ProjectImageUploadedEmail_descriptor_,
      ProjectImageUploadedEmail::default_instance_,
      ProjectImageUploadedEmail_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProjectImageUploadedEmail, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProjectImageUploadedEmail, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ProjectImageUploadedEmail));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ProjectImageUploadedEmail_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ProjectImageUploadedEmail_descriptor_, &ProjectImageUploadedEmail::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ProjectImageUploadedEmail_2eproto() {
  delete ProjectImageUploadedEmail::default_instance_;
  delete ProjectImageUploadedEmail_reflection_;
}

void protobuf_AddDesc_ProjectImageUploadedEmail_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::SolasMatch::Common::Protobufs::Emails::protobuf_AddDesc_EmailMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\037ProjectImageUploadedEmail.proto\022\"Solas"
    "Match.Common.Protobufs.Emails\032\022EmailMess"
    "age.proto\"\225\001\n\031ProjectImageUploadedEmail\022"
    "d\n\nemail_type\030\001 \002(\01625.SolasMatch.Common."
    "Protobufs.Emails.EmailMessage.Type:\031Proj"
    "ectImageUploadedEmail\022\022\n\nproject_id\030\002 \002("
    "\005", 241);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ProjectImageUploadedEmail.proto", &protobuf_RegisterTypes);
  ProjectImageUploadedEmail::default_instance_ = new ProjectImageUploadedEmail();
  ProjectImageUploadedEmail::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ProjectImageUploadedEmail_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ProjectImageUploadedEmail_2eproto {
  StaticDescriptorInitializer_ProjectImageUploadedEmail_2eproto() {
    protobuf_AddDesc_ProjectImageUploadedEmail_2eproto();
  }
} static_descriptor_initializer_ProjectImageUploadedEmail_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ProjectImageUploadedEmail::kEmailTypeFieldNumber;
const int ProjectImageUploadedEmail::kProjectIdFieldNumber;
#endif  // !_MSC_VER

ProjectImageUploadedEmail::ProjectImageUploadedEmail()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ProjectImageUploadedEmail::InitAsDefaultInstance() {
}

ProjectImageUploadedEmail::ProjectImageUploadedEmail(const ProjectImageUploadedEmail& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ProjectImageUploadedEmail::SharedCtor() {
  _cached_size_ = 0;
  email_type_ = 29;
  project_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ProjectImageUploadedEmail::~ProjectImageUploadedEmail() {
  SharedDtor();
}

void ProjectImageUploadedEmail::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ProjectImageUploadedEmail::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProjectImageUploadedEmail::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ProjectImageUploadedEmail_descriptor_;
}

const ProjectImageUploadedEmail& ProjectImageUploadedEmail::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ProjectImageUploadedEmail_2eproto();
  return *default_instance_;
}

ProjectImageUploadedEmail* ProjectImageUploadedEmail::default_instance_ = NULL;

ProjectImageUploadedEmail* ProjectImageUploadedEmail::New() const {
  return new ProjectImageUploadedEmail;
}

void ProjectImageUploadedEmail::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    email_type_ = 29;
    project_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ProjectImageUploadedEmail::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = ProjectImageUploadedEmail];
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

void ProjectImageUploadedEmail::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = ProjectImageUploadedEmail];
  if (has_email_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->email_type(), output);
  }

  // required int32 project_id = 2;
  if (has_project_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->project_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ProjectImageUploadedEmail::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = ProjectImageUploadedEmail];
  if (has_email_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->email_type(), target);
  }

  // required int32 project_id = 2;
  if (has_project_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->project_id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ProjectImageUploadedEmail::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = ProjectImageUploadedEmail];
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

void ProjectImageUploadedEmail::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ProjectImageUploadedEmail* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ProjectImageUploadedEmail*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ProjectImageUploadedEmail::MergeFrom(const ProjectImageUploadedEmail& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_email_type()) {
      set_email_type(from.email_type());
    }
    if (from.has_project_id()) {
      set_project_id(from.project_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ProjectImageUploadedEmail::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProjectImageUploadedEmail::CopyFrom(const ProjectImageUploadedEmail& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProjectImageUploadedEmail::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void ProjectImageUploadedEmail::Swap(ProjectImageUploadedEmail* other) {
  if (other != this) {
    std::swap(email_type_, other->email_type_);
    std::swap(project_id_, other->project_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ProjectImageUploadedEmail::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ProjectImageUploadedEmail_descriptor_;
  metadata.reflection = ProjectImageUploadedEmail_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Emails
}  // namespace Protobufs
}  // namespace Common
}  // namespace SolasMatch

// @@protoc_insertion_point(global_scope)
