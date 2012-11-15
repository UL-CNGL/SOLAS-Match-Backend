// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "OrgMembershipAccepted.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* OrgMembershipAccepted_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OrgMembershipAccepted_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_OrgMembershipAccepted_2eproto() {
  protobuf_AddDesc_OrgMembershipAccepted_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "OrgMembershipAccepted.proto");
  GOOGLE_CHECK(file != NULL);
  OrgMembershipAccepted_descriptor_ = file->message_type(0);
  static const int OrgMembershipAccepted_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgMembershipAccepted, email_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgMembershipAccepted, user_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgMembershipAccepted, org_id_),
  };
  OrgMembershipAccepted_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      OrgMembershipAccepted_descriptor_,
      OrgMembershipAccepted::default_instance_,
      OrgMembershipAccepted_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgMembershipAccepted, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrgMembershipAccepted, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(OrgMembershipAccepted));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_OrgMembershipAccepted_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    OrgMembershipAccepted_descriptor_, &OrgMembershipAccepted::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_OrgMembershipAccepted_2eproto() {
  delete OrgMembershipAccepted::default_instance_;
  delete OrgMembershipAccepted_reflection_;
}

void protobuf_AddDesc_OrgMembershipAccepted_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_EmailMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033OrgMembershipAccepted.proto\032\022EmailMess"
    "age.proto\"w\n\025OrgMembershipAccepted\022=\n\nem"
    "ail_type\030\001 \002(\0162\022.EmailMessage.Type:\025OrgM"
    "embershipAccepted\022\017\n\007user_id\030\002 \002(\005\022\016\n\006or"
    "g_id\030\003 \002(\005", 170);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "OrgMembershipAccepted.proto", &protobuf_RegisterTypes);
  OrgMembershipAccepted::default_instance_ = new OrgMembershipAccepted();
  OrgMembershipAccepted::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_OrgMembershipAccepted_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_OrgMembershipAccepted_2eproto {
  StaticDescriptorInitializer_OrgMembershipAccepted_2eproto() {
    protobuf_AddDesc_OrgMembershipAccepted_2eproto();
  }
} static_descriptor_initializer_OrgMembershipAccepted_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int OrgMembershipAccepted::kEmailTypeFieldNumber;
const int OrgMembershipAccepted::kUserIdFieldNumber;
const int OrgMembershipAccepted::kOrgIdFieldNumber;
#endif  // !_MSC_VER

OrgMembershipAccepted::OrgMembershipAccepted()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void OrgMembershipAccepted::InitAsDefaultInstance() {
}

OrgMembershipAccepted::OrgMembershipAccepted(const OrgMembershipAccepted& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void OrgMembershipAccepted::SharedCtor() {
  _cached_size_ = 0;
  email_type_ = 3;
  user_id_ = 0;
  org_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OrgMembershipAccepted::~OrgMembershipAccepted() {
  SharedDtor();
}

void OrgMembershipAccepted::SharedDtor() {
  if (this != default_instance_) {
  }
}

void OrgMembershipAccepted::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OrgMembershipAccepted::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OrgMembershipAccepted_descriptor_;
}

const OrgMembershipAccepted& OrgMembershipAccepted::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_OrgMembershipAccepted_2eproto();  return *default_instance_;
}

OrgMembershipAccepted* OrgMembershipAccepted::default_instance_ = NULL;

OrgMembershipAccepted* OrgMembershipAccepted::New() const {
  return new OrgMembershipAccepted;
}

void OrgMembershipAccepted::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    email_type_ = 3;
    user_id_ = 0;
    org_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool OrgMembershipAccepted::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .EmailMessage.Type email_type = 1 [default = OrgMembershipAccepted];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::EmailMessage_Type_IsValid(value)) {
            set_email_type(static_cast< ::EmailMessage_Type >(value));
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
        if (input->ExpectTag(24)) goto parse_org_id;
        break;
      }
      
      // required int32 org_id = 3;
      case 3: {
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

void OrgMembershipAccepted::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .EmailMessage.Type email_type = 1 [default = OrgMembershipAccepted];
  if (has_email_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->email_type(), output);
  }
  
  // required int32 user_id = 2;
  if (has_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->user_id(), output);
  }
  
  // required int32 org_id = 3;
  if (has_org_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->org_id(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* OrgMembershipAccepted::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .EmailMessage.Type email_type = 1 [default = OrgMembershipAccepted];
  if (has_email_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->email_type(), target);
  }
  
  // required int32 user_id = 2;
  if (has_user_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->user_id(), target);
  }
  
  // required int32 org_id = 3;
  if (has_org_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->org_id(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int OrgMembershipAccepted::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .EmailMessage.Type email_type = 1 [default = OrgMembershipAccepted];
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
    
    // required int32 org_id = 3;
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

void OrgMembershipAccepted::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const OrgMembershipAccepted* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const OrgMembershipAccepted*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void OrgMembershipAccepted::MergeFrom(const OrgMembershipAccepted& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_email_type()) {
      set_email_type(from.email_type());
    }
    if (from.has_user_id()) {
      set_user_id(from.user_id());
    }
    if (from.has_org_id()) {
      set_org_id(from.org_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void OrgMembershipAccepted::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OrgMembershipAccepted::CopyFrom(const OrgMembershipAccepted& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OrgMembershipAccepted::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  
  return true;
}

void OrgMembershipAccepted::Swap(OrgMembershipAccepted* other) {
  if (other != this) {
    std::swap(email_type_, other->email_type_);
    std::swap(user_id_, other->user_id_);
    std::swap(org_id_, other->org_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata OrgMembershipAccepted::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OrgMembershipAccepted_descriptor_;
  metadata.reflection = OrgMembershipAccepted_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)