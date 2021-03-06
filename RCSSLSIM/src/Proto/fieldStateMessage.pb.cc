// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "fieldStateMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* FieldStateMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FieldStateMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_fieldStateMessage_2eproto() {
  protobuf_AddDesc_fieldStateMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "fieldStateMessage.proto");
  GOOGLE_CHECK(file != NULL);
  FieldStateMessage_descriptor_ = file->message_type(0);
  static const int FieldStateMessage_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldStateMessage, robot_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldStateMessage, ball_),
  };
  FieldStateMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FieldStateMessage_descriptor_,
      FieldStateMessage::default_instance_,
      FieldStateMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldStateMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldStateMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FieldStateMessage));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_fieldStateMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FieldStateMessage_descriptor_, &FieldStateMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_fieldStateMessage_2eproto() {
  delete FieldStateMessage::default_instance_;
  delete FieldStateMessage_reflection_;
}

void protobuf_AddDesc_fieldStateMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_robot_2eproto();
  ::protobuf_AddDesc_ball_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027fieldStateMessage.proto\032\013robot.proto\032\n"
    "ball.proto\"\?\n\021FieldStateMessage\022\025\n\005robot"
    "\030\001 \003(\0132\006.Robot\022\023\n\004ball\030\002 \003(\0132\005.Ball", 115);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "fieldStateMessage.proto", &protobuf_RegisterTypes);
  FieldStateMessage::default_instance_ = new FieldStateMessage();
  FieldStateMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_fieldStateMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_fieldStateMessage_2eproto {
  StaticDescriptorInitializer_fieldStateMessage_2eproto() {
    protobuf_AddDesc_fieldStateMessage_2eproto();
  }
} static_descriptor_initializer_fieldStateMessage_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int FieldStateMessage::kRobotFieldNumber;
const int FieldStateMessage::kBallFieldNumber;
#endif  // !_MSC_VER

FieldStateMessage::FieldStateMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void FieldStateMessage::InitAsDefaultInstance() {
}

FieldStateMessage::FieldStateMessage(const FieldStateMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void FieldStateMessage::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FieldStateMessage::~FieldStateMessage() {
  SharedDtor();
}

void FieldStateMessage::SharedDtor() {
  if (this != default_instance_) {
  }
}

void FieldStateMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FieldStateMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FieldStateMessage_descriptor_;
}

const FieldStateMessage& FieldStateMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_fieldStateMessage_2eproto();  return *default_instance_;
}

FieldStateMessage* FieldStateMessage::default_instance_ = NULL;

FieldStateMessage* FieldStateMessage::New() const {
  return new FieldStateMessage;
}

void FieldStateMessage::Clear() {
  robot_.Clear();
  ball_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FieldStateMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .Robot robot = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_robot:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_robot()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_robot;
        if (input->ExpectTag(18)) goto parse_ball;
        break;
      }
      
      // repeated .Ball ball = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ball:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_ball()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_ball;
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

void FieldStateMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .Robot robot = 1;
  for (int i = 0; i < this->robot_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->robot(i), output);
  }
  
  // repeated .Ball ball = 2;
  for (int i = 0; i < this->ball_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->ball(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* FieldStateMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .Robot robot = 1;
  for (int i = 0; i < this->robot_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->robot(i), target);
  }
  
  // repeated .Ball ball = 2;
  for (int i = 0; i < this->ball_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->ball(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int FieldStateMessage::ByteSize() const {
  int total_size = 0;
  
  // repeated .Robot robot = 1;
  total_size += 1 * this->robot_size();
  for (int i = 0; i < this->robot_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->robot(i));
  }
  
  // repeated .Ball ball = 2;
  total_size += 1 * this->ball_size();
  for (int i = 0; i < this->ball_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->ball(i));
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

void FieldStateMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FieldStateMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FieldStateMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FieldStateMessage::MergeFrom(const FieldStateMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  robot_.MergeFrom(from.robot_);
  ball_.MergeFrom(from.ball_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FieldStateMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FieldStateMessage::CopyFrom(const FieldStateMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FieldStateMessage::IsInitialized() const {
  
  return true;
}

void FieldStateMessage::Swap(FieldStateMessage* other) {
  if (other != this) {
    robot_.Swap(&other->robot_);
    ball_.Swap(&other->ball_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata FieldStateMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FieldStateMessage_descriptor_;
  metadata.reflection = FieldStateMessage_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
