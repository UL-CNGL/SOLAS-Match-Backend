// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PluginDataProto.proto

#ifndef PROTOBUF_PluginDataProto_2eproto__INCLUDED
#define PROTOBUF_PluginDataProto_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_PluginDataProto_2eproto();
void protobuf_AssignDesc_PluginDataProto_2eproto();
void protobuf_ShutdownFile_PluginDataProto_2eproto();

class PluginDataProto;

// ===================================================================

class PluginDataProto : public ::google::protobuf::Message {
 public:
  PluginDataProto();
  virtual ~PluginDataProto();

  PluginDataProto(const PluginDataProto& from);

  inline PluginDataProto& operator=(const PluginDataProto& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PluginDataProto& default_instance();

  void Swap(PluginDataProto* other);

  // implements Message ----------------------------------------------

  PluginDataProto* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PluginDataProto& from);
  void MergeFrom(const PluginDataProto& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string class_name = 1;
  inline bool has_class_name() const;
  inline void clear_class_name();
  static const int kClassNameFieldNumber = 1;
  inline const ::std::string& class_name() const;
  inline void set_class_name(const ::std::string& value);
  inline void set_class_name(const char* value);
  inline void set_class_name(const char* value, size_t size);
  inline ::std::string* mutable_class_name();
  inline ::std::string* release_class_name();
  inline void set_allocated_class_name(::std::string* class_name);

  // @@protoc_insertion_point(class_scope:PluginDataProto)
 private:
  inline void set_has_class_name();
  inline void clear_has_class_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* class_name_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_PluginDataProto_2eproto();
  friend void protobuf_AssignDesc_PluginDataProto_2eproto();
  friend void protobuf_ShutdownFile_PluginDataProto_2eproto();

  void InitAsDefaultInstance();
  static PluginDataProto* default_instance_;
};
// ===================================================================


// ===================================================================

// PluginDataProto

// required string class_name = 1;
inline bool PluginDataProto::has_class_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PluginDataProto::set_has_class_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PluginDataProto::clear_has_class_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PluginDataProto::clear_class_name() {
  if (class_name_ != &::google::protobuf::internal::kEmptyString) {
    class_name_->clear();
  }
  clear_has_class_name();
}
inline const ::std::string& PluginDataProto::class_name() const {
  return *class_name_;
}
inline void PluginDataProto::set_class_name(const ::std::string& value) {
  set_has_class_name();
  if (class_name_ == &::google::protobuf::internal::kEmptyString) {
    class_name_ = new ::std::string;
  }
  class_name_->assign(value);
}
inline void PluginDataProto::set_class_name(const char* value) {
  set_has_class_name();
  if (class_name_ == &::google::protobuf::internal::kEmptyString) {
    class_name_ = new ::std::string;
  }
  class_name_->assign(value);
}
inline void PluginDataProto::set_class_name(const char* value, size_t size) {
  set_has_class_name();
  if (class_name_ == &::google::protobuf::internal::kEmptyString) {
    class_name_ = new ::std::string;
  }
  class_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PluginDataProto::mutable_class_name() {
  set_has_class_name();
  if (class_name_ == &::google::protobuf::internal::kEmptyString) {
    class_name_ = new ::std::string;
  }
  return class_name_;
}
inline ::std::string* PluginDataProto::release_class_name() {
  clear_has_class_name();
  if (class_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = class_name_;
    class_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PluginDataProto::set_allocated_class_name(::std::string* class_name) {
  if (class_name_ != &::google::protobuf::internal::kEmptyString) {
    delete class_name_;
  }
  if (class_name) {
    set_has_class_name();
    class_name_ = class_name;
  } else {
    clear_has_class_name();
    class_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PluginDataProto_2eproto__INCLUDED
