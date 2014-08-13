// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WorkflowNode.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "WorkflowNode.pb.h"

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
namespace Models {

namespace {

const ::google::protobuf::Descriptor* WorkflowNode_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  WorkflowNode_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_WorkflowNode_2eproto() {
  protobuf_AddDesc_WorkflowNode_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "WorkflowNode.proto");
  GOOGLE_CHECK(file != NULL);
  WorkflowNode_descriptor_ = file->message_type(0);
  static const int WorkflowNode_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkflowNode, taskid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkflowNode, task_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkflowNode, next_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkflowNode, previous_),
  };
  WorkflowNode_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      WorkflowNode_descriptor_,
      WorkflowNode::default_instance_,
      WorkflowNode_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkflowNode, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkflowNode, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(WorkflowNode));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_WorkflowNode_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    WorkflowNode_descriptor_, &WorkflowNode::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_WorkflowNode_2eproto() {
  delete WorkflowNode::default_instance_;
  delete WorkflowNode_reflection_;
}

void protobuf_AddDesc_WorkflowNode_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::SolasMatch::Common::Protobufs::Models::protobuf_AddDesc_Task_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022WorkflowNode.proto\022\"SolasMatch.Common."
    "Protobufs.Models\032\nTask.proto\"v\n\014Workflow"
    "Node\022\016\n\006taskId\030\001 \002(\005\0226\n\004task\030\002 \001(\0132(.Sol"
    "asMatch.Common.Protobufs.Models.Task\022\014\n\004"
    "next\030\003 \003(\005\022\020\n\010previous\030\004 \003(\005", 188);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "WorkflowNode.proto", &protobuf_RegisterTypes);
  WorkflowNode::default_instance_ = new WorkflowNode();
  WorkflowNode::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_WorkflowNode_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_WorkflowNode_2eproto {
  StaticDescriptorInitializer_WorkflowNode_2eproto() {
    protobuf_AddDesc_WorkflowNode_2eproto();
  }
} static_descriptor_initializer_WorkflowNode_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int WorkflowNode::kTaskIdFieldNumber;
const int WorkflowNode::kTaskFieldNumber;
const int WorkflowNode::kNextFieldNumber;
const int WorkflowNode::kPreviousFieldNumber;
#endif  // !_MSC_VER

WorkflowNode::WorkflowNode()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void WorkflowNode::InitAsDefaultInstance() {
  task_ = const_cast< ::SolasMatch::Common::Protobufs::Models::Task*>(&::SolasMatch::Common::Protobufs::Models::Task::default_instance());
}

WorkflowNode::WorkflowNode(const WorkflowNode& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void WorkflowNode::SharedCtor() {
  _cached_size_ = 0;
  taskid_ = 0;
  task_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WorkflowNode::~WorkflowNode() {
  SharedDtor();
}

void WorkflowNode::SharedDtor() {
  if (this != default_instance_) {
    delete task_;
  }
}

void WorkflowNode::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* WorkflowNode::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WorkflowNode_descriptor_;
}

const WorkflowNode& WorkflowNode::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_WorkflowNode_2eproto();
  return *default_instance_;
}

WorkflowNode* WorkflowNode::default_instance_ = NULL;

WorkflowNode* WorkflowNode::New() const {
  return new WorkflowNode;
}

void WorkflowNode::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    taskid_ = 0;
    if (has_task()) {
      if (task_ != NULL) task_->::SolasMatch::Common::Protobufs::Models::Task::Clear();
    }
  }
  next_.Clear();
  previous_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool WorkflowNode::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 taskId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &taskid_)));
          set_has_taskid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_task;
        break;
      }

      // optional .SolasMatch.Common.Protobufs.Models.Task task = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_task:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_task()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_next;
        break;
      }

      // repeated int32 next = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_next:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 24, input, this->mutable_next())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_next())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_next;
        if (input->ExpectTag(32)) goto parse_previous;
        break;
      }

      // repeated int32 previous = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_previous:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 32, input, this->mutable_previous())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_previous())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_previous;
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

void WorkflowNode::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 taskId = 1;
  if (has_taskid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->taskid(), output);
  }

  // optional .SolasMatch.Common.Protobufs.Models.Task task = 2;
  if (has_task()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->task(), output);
  }

  // repeated int32 next = 3;
  for (int i = 0; i < this->next_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      3, this->next(i), output);
  }

  // repeated int32 previous = 4;
  for (int i = 0; i < this->previous_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      4, this->previous(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* WorkflowNode::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 taskId = 1;
  if (has_taskid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->taskid(), target);
  }

  // optional .SolasMatch.Common.Protobufs.Models.Task task = 2;
  if (has_task()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->task(), target);
  }

  // repeated int32 next = 3;
  for (int i = 0; i < this->next_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(3, this->next(i), target);
  }

  // repeated int32 previous = 4;
  for (int i = 0; i < this->previous_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(4, this->previous(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int WorkflowNode::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 taskId = 1;
    if (has_taskid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->taskid());
    }

    // optional .SolasMatch.Common.Protobufs.Models.Task task = 2;
    if (has_task()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->task());
    }

  }
  // repeated int32 next = 3;
  {
    int data_size = 0;
    for (int i = 0; i < this->next_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->next(i));
    }
    total_size += 1 * this->next_size() + data_size;
  }

  // repeated int32 previous = 4;
  {
    int data_size = 0;
    for (int i = 0; i < this->previous_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->previous(i));
    }
    total_size += 1 * this->previous_size() + data_size;
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

void WorkflowNode::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const WorkflowNode* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const WorkflowNode*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void WorkflowNode::MergeFrom(const WorkflowNode& from) {
  GOOGLE_CHECK_NE(&from, this);
  next_.MergeFrom(from.next_);
  previous_.MergeFrom(from.previous_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_taskid()) {
      set_taskid(from.taskid());
    }
    if (from.has_task()) {
      mutable_task()->::SolasMatch::Common::Protobufs::Models::Task::MergeFrom(from.task());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void WorkflowNode::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WorkflowNode::CopyFrom(const WorkflowNode& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WorkflowNode::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void WorkflowNode::Swap(WorkflowNode* other) {
  if (other != this) {
    std::swap(taskid_, other->taskid_);
    std::swap(task_, other->task_);
    next_.Swap(&other->next_);
    previous_.Swap(&other->previous_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata WorkflowNode::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = WorkflowNode_descriptor_;
  metadata.reflection = WorkflowNode_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Models
}  // namespace Protobufs
}  // namespace Common
}  // namespace SolasMatch

// @@protoc_insertion_point(global_scope)
