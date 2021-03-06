// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msgs/bool.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "msgs/bool.pb.h"

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

namespace gazebo {
namespace msgs {

namespace {

const ::google::protobuf::Descriptor* Bool_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Bool_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_msgs_2fbool_2eproto() {
  protobuf_AddDesc_msgs_2fbool_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "msgs/bool.proto");
  GOOGLE_CHECK(file != NULL);
  Bool_descriptor_ = file->message_type(0);
  static const int Bool_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Bool, data_),
  };
  Bool_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Bool_descriptor_,
      Bool::default_instance_,
      Bool_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Bool, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Bool, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Bool));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_msgs_2fbool_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Bool_descriptor_, &Bool::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_msgs_2fbool_2eproto() {
  delete Bool::default_instance_;
  delete Bool_reflection_;
}

void protobuf_AddDesc_msgs_2fbool_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017msgs/bool.proto\022\013gazebo.msgs\"\024\n\004Bool\022\014"
    "\n\004data\030\001 \002(\010B\010B\006GzBool", 62);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "msgs/bool.proto", &protobuf_RegisterTypes);
  Bool::default_instance_ = new Bool();
  Bool::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_msgs_2fbool_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_msgs_2fbool_2eproto {
  StaticDescriptorInitializer_msgs_2fbool_2eproto() {
    protobuf_AddDesc_msgs_2fbool_2eproto();
  }
} static_descriptor_initializer_msgs_2fbool_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Bool::kDataFieldNumber;
#endif  // !_MSC_VER

Bool::Bool()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Bool::InitAsDefaultInstance() {
}

Bool::Bool(const Bool& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Bool::SharedCtor() {
  _cached_size_ = 0;
  data_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Bool::~Bool() {
  SharedDtor();
}

void Bool::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Bool::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Bool::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Bool_descriptor_;
}

const Bool& Bool::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_msgs_2fbool_2eproto();
  return *default_instance_;
}

Bool* Bool::default_instance_ = NULL;

Bool* Bool::New() const {
  return new Bool;
}

void Bool::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    data_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Bool::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bool data = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &data_)));
          set_has_data();
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

void Bool::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bool data = 1;
  if (has_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->data(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Bool::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required bool data = 1;
  if (has_data()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->data(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Bool::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bool data = 1;
    if (has_data()) {
      total_size += 1 + 1;
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

void Bool::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Bool* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Bool*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Bool::MergeFrom(const Bool& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_data()) {
      set_data(from.data());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Bool::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Bool::CopyFrom(const Bool& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Bool::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void Bool::Swap(Bool* other) {
  if (other != this) {
    std::swap(data_, other->data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Bool::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Bool_descriptor_;
  metadata.reflection = Bool_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)
