// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: basic.proto

#include "basic.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace sim_msg {
class Vec2DefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Vec2>
      _instance;
} _Vec2_default_instance_;
class Vec3DefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Vec3>
      _instance;
} _Vec3_default_instance_;
class Vec4DefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Vec4>
      _instance;
} _Vec4_default_instance_;
}  // namespace sim_msg
namespace protobuf_basic_2eproto {
static void InitDefaultsVec2() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::sim_msg::_Vec2_default_instance_;
    new (ptr) ::sim_msg::Vec2();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sim_msg::Vec2::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Vec2 =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsVec2}, {}};

static void InitDefaultsVec3() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::sim_msg::_Vec3_default_instance_;
    new (ptr) ::sim_msg::Vec3();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sim_msg::Vec3::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Vec3 =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsVec3}, {}};

static void InitDefaultsVec4() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::sim_msg::_Vec4_default_instance_;
    new (ptr) ::sim_msg::Vec4();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sim_msg::Vec4::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Vec4 =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsVec4}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Vec2.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Vec3.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Vec4.base);
}

::google::protobuf::Metadata file_level_metadata[3];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sim_msg::Vec2, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sim_msg::Vec2, x_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sim_msg::Vec2, y_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sim_msg::Vec3, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sim_msg::Vec3, x_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sim_msg::Vec3, y_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sim_msg::Vec3, z_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sim_msg::Vec4, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sim_msg::Vec4, x_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sim_msg::Vec4, y_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sim_msg::Vec4, z_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sim_msg::Vec4, w_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::sim_msg::Vec2)},
  { 7, -1, sizeof(::sim_msg::Vec3)},
  { 15, -1, sizeof(::sim_msg::Vec4)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::sim_msg::_Vec2_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::sim_msg::_Vec3_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::sim_msg::_Vec4_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "basic.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\013basic.proto\022\007sim_msg\"\034\n\004Vec2\022\t\n\001x\030\001 \001("
      "\001\022\t\n\001y\030\002 \001(\001\"\'\n\004Vec3\022\t\n\001x\030\001 \001(\001\022\t\n\001y\030\002 \001"
      "(\001\022\t\n\001z\030\003 \001(\001\"2\n\004Vec4\022\t\n\001x\030\001 \001(\001\022\t\n\001y\030\002 "
      "\001(\001\022\t\n\001z\030\003 \001(\001\022\t\n\001w\030\004 \001(\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 153);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "basic.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_basic_2eproto
namespace sim_msg {

// ===================================================================

void Vec2::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Vec2::kXFieldNumber;
const int Vec2::kYFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Vec2::Vec2()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_basic_2eproto::scc_info_Vec2.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:sim_msg.Vec2)
}
Vec2::Vec2(const Vec2& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&y_) -
    reinterpret_cast<char*>(&x_)) + sizeof(y_));
  // @@protoc_insertion_point(copy_constructor:sim_msg.Vec2)
}

void Vec2::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&y_) -
      reinterpret_cast<char*>(&x_)) + sizeof(y_));
}

Vec2::~Vec2() {
  // @@protoc_insertion_point(destructor:sim_msg.Vec2)
  SharedDtor();
}

void Vec2::SharedDtor() {
}

void Vec2::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Vec2::descriptor() {
  ::protobuf_basic_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_basic_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Vec2& Vec2::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_basic_2eproto::scc_info_Vec2.base);
  return *internal_default_instance();
}


void Vec2::Clear() {
// @@protoc_insertion_point(message_clear_start:sim_msg.Vec2)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&y_) -
      reinterpret_cast<char*>(&x_)) + sizeof(y_));
  _internal_metadata_.Clear();
}

bool Vec2::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sim_msg.Vec2)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double x = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double y = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sim_msg.Vec2)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sim_msg.Vec2)
  return false;
#undef DO_
}

void Vec2::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sim_msg.Vec2)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 1;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->x(), output);
  }

  // double y = 2;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->y(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:sim_msg.Vec2)
}

::google::protobuf::uint8* Vec2::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:sim_msg.Vec2)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 1;
  if (this->x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->x(), target);
  }

  // double y = 2;
  if (this->y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->y(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sim_msg.Vec2)
  return target;
}

size_t Vec2::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sim_msg.Vec2)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // double x = 1;
  if (this->x() != 0) {
    total_size += 1 + 8;
  }

  // double y = 2;
  if (this->y() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Vec2::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sim_msg.Vec2)
  GOOGLE_DCHECK_NE(&from, this);
  const Vec2* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Vec2>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sim_msg.Vec2)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sim_msg.Vec2)
    MergeFrom(*source);
  }
}

void Vec2::MergeFrom(const Vec2& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sim_msg.Vec2)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
}

void Vec2::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sim_msg.Vec2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vec2::CopyFrom(const Vec2& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sim_msg.Vec2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vec2::IsInitialized() const {
  return true;
}

void Vec2::Swap(Vec2* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Vec2::InternalSwap(Vec2* other) {
  using std::swap;
  swap(x_, other->x_);
  swap(y_, other->y_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Vec2::GetMetadata() const {
  protobuf_basic_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_basic_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Vec3::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Vec3::kXFieldNumber;
const int Vec3::kYFieldNumber;
const int Vec3::kZFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Vec3::Vec3()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_basic_2eproto::scc_info_Vec3.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:sim_msg.Vec3)
}
Vec3::Vec3(const Vec3& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&x_)) + sizeof(z_));
  // @@protoc_insertion_point(copy_constructor:sim_msg.Vec3)
}

void Vec3::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&z_) -
      reinterpret_cast<char*>(&x_)) + sizeof(z_));
}

Vec3::~Vec3() {
  // @@protoc_insertion_point(destructor:sim_msg.Vec3)
  SharedDtor();
}

void Vec3::SharedDtor() {
}

void Vec3::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Vec3::descriptor() {
  ::protobuf_basic_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_basic_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Vec3& Vec3::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_basic_2eproto::scc_info_Vec3.base);
  return *internal_default_instance();
}


void Vec3::Clear() {
// @@protoc_insertion_point(message_clear_start:sim_msg.Vec3)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&z_) -
      reinterpret_cast<char*>(&x_)) + sizeof(z_));
  _internal_metadata_.Clear();
}

bool Vec3::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sim_msg.Vec3)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double x = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double y = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double z = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &z_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sim_msg.Vec3)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sim_msg.Vec3)
  return false;
#undef DO_
}

void Vec3::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sim_msg.Vec3)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 1;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->x(), output);
  }

  // double y = 2;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->y(), output);
  }

  // double z = 3;
  if (this->z() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->z(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:sim_msg.Vec3)
}

::google::protobuf::uint8* Vec3::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:sim_msg.Vec3)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 1;
  if (this->x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->x(), target);
  }

  // double y = 2;
  if (this->y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->y(), target);
  }

  // double z = 3;
  if (this->z() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->z(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sim_msg.Vec3)
  return target;
}

size_t Vec3::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sim_msg.Vec3)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // double x = 1;
  if (this->x() != 0) {
    total_size += 1 + 8;
  }

  // double y = 2;
  if (this->y() != 0) {
    total_size += 1 + 8;
  }

  // double z = 3;
  if (this->z() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Vec3::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sim_msg.Vec3)
  GOOGLE_DCHECK_NE(&from, this);
  const Vec3* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Vec3>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sim_msg.Vec3)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sim_msg.Vec3)
    MergeFrom(*source);
  }
}

void Vec3::MergeFrom(const Vec3& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sim_msg.Vec3)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
  if (from.z() != 0) {
    set_z(from.z());
  }
}

void Vec3::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sim_msg.Vec3)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vec3::CopyFrom(const Vec3& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sim_msg.Vec3)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vec3::IsInitialized() const {
  return true;
}

void Vec3::Swap(Vec3* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Vec3::InternalSwap(Vec3* other) {
  using std::swap;
  swap(x_, other->x_);
  swap(y_, other->y_);
  swap(z_, other->z_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Vec3::GetMetadata() const {
  protobuf_basic_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_basic_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Vec4::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Vec4::kXFieldNumber;
const int Vec4::kYFieldNumber;
const int Vec4::kZFieldNumber;
const int Vec4::kWFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Vec4::Vec4()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_basic_2eproto::scc_info_Vec4.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:sim_msg.Vec4)
}
Vec4::Vec4(const Vec4& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&w_) -
    reinterpret_cast<char*>(&x_)) + sizeof(w_));
  // @@protoc_insertion_point(copy_constructor:sim_msg.Vec4)
}

void Vec4::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&w_) -
      reinterpret_cast<char*>(&x_)) + sizeof(w_));
}

Vec4::~Vec4() {
  // @@protoc_insertion_point(destructor:sim_msg.Vec4)
  SharedDtor();
}

void Vec4::SharedDtor() {
}

void Vec4::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Vec4::descriptor() {
  ::protobuf_basic_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_basic_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Vec4& Vec4::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_basic_2eproto::scc_info_Vec4.base);
  return *internal_default_instance();
}


void Vec4::Clear() {
// @@protoc_insertion_point(message_clear_start:sim_msg.Vec4)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&w_) -
      reinterpret_cast<char*>(&x_)) + sizeof(w_));
  _internal_metadata_.Clear();
}

bool Vec4::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sim_msg.Vec4)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double x = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double y = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double z = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &z_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double w = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &w_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sim_msg.Vec4)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sim_msg.Vec4)
  return false;
#undef DO_
}

void Vec4::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sim_msg.Vec4)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 1;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->x(), output);
  }

  // double y = 2;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->y(), output);
  }

  // double z = 3;
  if (this->z() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->z(), output);
  }

  // double w = 4;
  if (this->w() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->w(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:sim_msg.Vec4)
}

::google::protobuf::uint8* Vec4::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:sim_msg.Vec4)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 1;
  if (this->x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->x(), target);
  }

  // double y = 2;
  if (this->y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->y(), target);
  }

  // double z = 3;
  if (this->z() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->z(), target);
  }

  // double w = 4;
  if (this->w() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->w(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sim_msg.Vec4)
  return target;
}

size_t Vec4::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sim_msg.Vec4)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // double x = 1;
  if (this->x() != 0) {
    total_size += 1 + 8;
  }

  // double y = 2;
  if (this->y() != 0) {
    total_size += 1 + 8;
  }

  // double z = 3;
  if (this->z() != 0) {
    total_size += 1 + 8;
  }

  // double w = 4;
  if (this->w() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Vec4::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sim_msg.Vec4)
  GOOGLE_DCHECK_NE(&from, this);
  const Vec4* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Vec4>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sim_msg.Vec4)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sim_msg.Vec4)
    MergeFrom(*source);
  }
}

void Vec4::MergeFrom(const Vec4& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sim_msg.Vec4)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
  if (from.z() != 0) {
    set_z(from.z());
  }
  if (from.w() != 0) {
    set_w(from.w());
  }
}

void Vec4::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sim_msg.Vec4)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vec4::CopyFrom(const Vec4& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sim_msg.Vec4)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vec4::IsInitialized() const {
  return true;
}

void Vec4::Swap(Vec4* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Vec4::InternalSwap(Vec4* other) {
  using std::swap;
  swap(x_, other->x_);
  swap(y_, other->y_);
  swap(z_, other->z_);
  swap(w_, other->w_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Vec4::GetMetadata() const {
  protobuf_basic_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_basic_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace sim_msg
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::sim_msg::Vec2* Arena::CreateMaybeMessage< ::sim_msg::Vec2 >(Arena* arena) {
  return Arena::CreateInternal< ::sim_msg::Vec2 >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::sim_msg::Vec3* Arena::CreateMaybeMessage< ::sim_msg::Vec3 >(Arena* arena) {
  return Arena::CreateInternal< ::sim_msg::Vec3 >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::sim_msg::Vec4* Arena::CreateMaybeMessage< ::sim_msg::Vec4 >(Arena* arena) {
  return Arena::CreateInternal< ::sim_msg::Vec4 >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)