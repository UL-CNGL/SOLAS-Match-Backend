// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "User.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* User_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  User_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_User_2eproto() {
  protobuf_AddDesc_User_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "User.proto");
  GOOGLE_CHECK(file != NULL);
  User_descriptor_ = file->message_type(0);
  static const int User_offsets_[9] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, user_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, display_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, email_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, password_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, biography_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, nonce_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, created_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, native_lang_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, native_region_id_),
  };
  User_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      User_descriptor_,
      User::default_instance_,
      User_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(User));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_User_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    User_descriptor_, &User::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_User_2eproto() {
  delete User::default_instance_;
  delete User_reflection_;
}

void protobuf_AddDesc_User_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\nUser.proto\"\270\001\n\004User\022\017\n\007user_id\030\001 \002(\005\022\024"
    "\n\014display_name\030\002 \001(\t\022\r\n\005email\030\003 \001(\t\022\020\n\010p"
    "assword\030\004 \001(\t\022\021\n\tbiography\030\005 \001(\t\022\r\n\005nonc"
    "e\030\006 \001(\t\022\024\n\014created_time\030\007 \001(\t\022\026\n\016native_"
    "lang_id\030\010 \001(\005\022\030\n\020native_region_id\030\t \001(\005", 199);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "User.proto", &protobuf_RegisterTypes);
  User::default_instance_ = new User();
  User::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_User_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_User_2eproto {
  StaticDescriptorInitializer_User_2eproto() {
    protobuf_AddDesc_User_2eproto();
  }
} static_descriptor_initializer_User_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int User::kUserIdFieldNumber;
const int User::kDisplayNameFieldNumber;
const int User::kEmailFieldNumber;
const int User::kPasswordFieldNumber;
const int User::kBiographyFieldNumber;
const int User::kNonceFieldNumber;
const int User::kCreatedTimeFieldNumber;
const int User::kNativeLangIdFieldNumber;
const int User::kNativeRegionIdFieldNumber;
#endif  // !_MSC_VER

User::User()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void User::InitAsDefaultInstance() {
}

User::User(const User& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void User::SharedCtor() {
  _cached_size_ = 0;
  user_id_ = 0;
  display_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  email_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  biography_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  nonce_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  created_time_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  native_lang_id_ = 0;
  native_region_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

User::~User() {
  SharedDtor();
}

void User::SharedDtor() {
  if (display_name_ != &::google::protobuf::internal::kEmptyString) {
    delete display_name_;
  }
  if (email_ != &::google::protobuf::internal::kEmptyString) {
    delete email_;
  }
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    delete password_;
  }
  if (biography_ != &::google::protobuf::internal::kEmptyString) {
    delete biography_;
  }
  if (nonce_ != &::google::protobuf::internal::kEmptyString) {
    delete nonce_;
  }
  if (created_time_ != &::google::protobuf::internal::kEmptyString) {
    delete created_time_;
  }
  if (this != default_instance_) {
  }
}

void User::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* User::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return User_descriptor_;
}

const User& User::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_User_2eproto();  return *default_instance_;
}

User* User::default_instance_ = NULL;

User* User::New() const {
  return new User;
}

void User::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    user_id_ = 0;
    if (has_display_name()) {
      if (display_name_ != &::google::protobuf::internal::kEmptyString) {
        display_name_->clear();
      }
    }
    if (has_email()) {
      if (email_ != &::google::protobuf::internal::kEmptyString) {
        email_->clear();
      }
    }
    if (has_password()) {
      if (password_ != &::google::protobuf::internal::kEmptyString) {
        password_->clear();
      }
    }
    if (has_biography()) {
      if (biography_ != &::google::protobuf::internal::kEmptyString) {
        biography_->clear();
      }
    }
    if (has_nonce()) {
      if (nonce_ != &::google::protobuf::internal::kEmptyString) {
        nonce_->clear();
      }
    }
    if (has_created_time()) {
      if (created_time_ != &::google::protobuf::internal::kEmptyString) {
        created_time_->clear();
      }
    }
    native_lang_id_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    native_region_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool User::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 user_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &user_id_)));
          set_has_user_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_display_name;
        break;
      }
      
      // optional string display_name = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_display_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_display_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->display_name().data(), this->display_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_email;
        break;
      }
      
      // optional string email = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_email:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_email()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->email().data(), this->email().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_password;
        break;
      }
      
      // optional string password = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_password:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_password()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->password().data(), this->password().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_biography;
        break;
      }
      
      // optional string biography = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_biography:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_biography()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->biography().data(), this->biography().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_nonce;
        break;
      }
      
      // optional string nonce = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_nonce:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_nonce()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->nonce().data(), this->nonce().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_created_time;
        break;
      }
      
      // optional string created_time = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_created_time:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_created_time()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->created_time().data(), this->created_time().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_native_lang_id;
        break;
      }
      
      // optional int32 native_lang_id = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_native_lang_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &native_lang_id_)));
          set_has_native_lang_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_native_region_id;
        break;
      }
      
      // optional int32 native_region_id = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_native_region_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &native_region_id_)));
          set_has_native_region_id();
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

void User::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 user_id = 1;
  if (has_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->user_id(), output);
  }
  
  // optional string display_name = 2;
  if (has_display_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->display_name().data(), this->display_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->display_name(), output);
  }
  
  // optional string email = 3;
  if (has_email()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->email().data(), this->email().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->email(), output);
  }
  
  // optional string password = 4;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->password(), output);
  }
  
  // optional string biography = 5;
  if (has_biography()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->biography().data(), this->biography().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->biography(), output);
  }
  
  // optional string nonce = 6;
  if (has_nonce()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->nonce().data(), this->nonce().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->nonce(), output);
  }
  
  // optional string created_time = 7;
  if (has_created_time()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->created_time().data(), this->created_time().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      7, this->created_time(), output);
  }
  
  // optional int32 native_lang_id = 8;
  if (has_native_lang_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->native_lang_id(), output);
  }
  
  // optional int32 native_region_id = 9;
  if (has_native_region_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->native_region_id(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* User::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 user_id = 1;
  if (has_user_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->user_id(), target);
  }
  
  // optional string display_name = 2;
  if (has_display_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->display_name().data(), this->display_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->display_name(), target);
  }
  
  // optional string email = 3;
  if (has_email()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->email().data(), this->email().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->email(), target);
  }
  
  // optional string password = 4;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->password(), target);
  }
  
  // optional string biography = 5;
  if (has_biography()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->biography().data(), this->biography().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->biography(), target);
  }
  
  // optional string nonce = 6;
  if (has_nonce()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->nonce().data(), this->nonce().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->nonce(), target);
  }
  
  // optional string created_time = 7;
  if (has_created_time()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->created_time().data(), this->created_time().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->created_time(), target);
  }
  
  // optional int32 native_lang_id = 8;
  if (has_native_lang_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->native_lang_id(), target);
  }
  
  // optional int32 native_region_id = 9;
  if (has_native_region_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->native_region_id(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int User::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 user_id = 1;
    if (has_user_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->user_id());
    }
    
    // optional string display_name = 2;
    if (has_display_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->display_name());
    }
    
    // optional string email = 3;
    if (has_email()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->email());
    }
    
    // optional string password = 4;
    if (has_password()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->password());
    }
    
    // optional string biography = 5;
    if (has_biography()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->biography());
    }
    
    // optional string nonce = 6;
    if (has_nonce()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->nonce());
    }
    
    // optional string created_time = 7;
    if (has_created_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->created_time());
    }
    
    // optional int32 native_lang_id = 8;
    if (has_native_lang_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->native_lang_id());
    }
    
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 native_region_id = 9;
    if (has_native_region_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->native_region_id());
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

void User::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const User* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const User*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void User::MergeFrom(const User& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_user_id()) {
      set_user_id(from.user_id());
    }
    if (from.has_display_name()) {
      set_display_name(from.display_name());
    }
    if (from.has_email()) {
      set_email(from.email());
    }
    if (from.has_password()) {
      set_password(from.password());
    }
    if (from.has_biography()) {
      set_biography(from.biography());
    }
    if (from.has_nonce()) {
      set_nonce(from.nonce());
    }
    if (from.has_created_time()) {
      set_created_time(from.created_time());
    }
    if (from.has_native_lang_id()) {
      set_native_lang_id(from.native_lang_id());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_native_region_id()) {
      set_native_region_id(from.native_region_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void User::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void User::CopyFrom(const User& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool User::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void User::Swap(User* other) {
  if (other != this) {
    std::swap(user_id_, other->user_id_);
    std::swap(display_name_, other->display_name_);
    std::swap(email_, other->email_);
    std::swap(password_, other->password_);
    std::swap(biography_, other->biography_);
    std::swap(nonce_, other->nonce_);
    std::swap(created_time_, other->created_time_);
    std::swap(native_lang_id_, other->native_lang_id_);
    std::swap(native_region_id_, other->native_region_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata User::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = User_descriptor_;
  metadata.reflection = User_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
