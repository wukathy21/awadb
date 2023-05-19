// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_DOC_GAMMA_API_H_
#define FLATBUFFERS_GENERATED_DOC_GAMMA_API_H_

#include "flatbuffers/flatbuffers.h"

#include "types_generated.h"

namespace gamma_api {

struct Field;
struct FieldBuilder;

struct Doc;
struct DocBuilder;

struct Field FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef FieldBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_VALUE = 6,
    VT_SOURCE = 8,
    VT_DATA_TYPE = 10
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const flatbuffers::Vector<uint8_t> *value() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_VALUE);
  }
  const flatbuffers::String *source() const {
    return GetPointer<const flatbuffers::String *>(VT_SOURCE);
  }
  DataType data_type() const {
    return static_cast<DataType>(GetField<int8_t>(VT_DATA_TYPE, 0));
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_VALUE) &&
           verifier.VerifyVector(value()) &&
           VerifyOffset(verifier, VT_SOURCE) &&
           verifier.VerifyString(source()) &&
           VerifyField<int8_t>(verifier, VT_DATA_TYPE) &&
           verifier.EndTable();
  }
};

struct FieldBuilder {
  typedef Field Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Field::VT_NAME, name);
  }
  void add_value(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> value) {
    fbb_.AddOffset(Field::VT_VALUE, value);
  }
  void add_source(flatbuffers::Offset<flatbuffers::String> source) {
    fbb_.AddOffset(Field::VT_SOURCE, source);
  }
  void add_data_type(DataType data_type) {
    fbb_.AddElement<int8_t>(Field::VT_DATA_TYPE, static_cast<int8_t>(data_type), 0);
  }
  explicit FieldBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Field> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Field>(end);
    return o;
  }
};

inline flatbuffers::Offset<Field> CreateField(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> value = 0,
    flatbuffers::Offset<flatbuffers::String> source = 0,
    DataType data_type = INT) {
  FieldBuilder builder_(_fbb);
  builder_.add_source(source);
  builder_.add_value(value);
  builder_.add_name(name);
  builder_.add_data_type(data_type);
  return builder_.Finish();
}

inline flatbuffers::Offset<Field> CreateFieldDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    const std::vector<uint8_t> *value = nullptr,
    const char *source = nullptr,
    DataType data_type = INT) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto value__ = value ? _fbb.CreateVector<uint8_t>(*value) : 0;
  auto source__ = source ? _fbb.CreateString(source) : 0;
  return gamma_api::CreateField(
      _fbb,
      name__,
      value__,
      source__,
      data_type);
}

struct Doc FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef DocBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FIELDS = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<gamma_api::Field>> *fields() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<gamma_api::Field>> *>(VT_FIELDS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_FIELDS) &&
           verifier.VerifyVector(fields()) &&
           verifier.VerifyVectorOfTables(fields()) &&
           verifier.EndTable();
  }
};

struct DocBuilder {
  typedef Doc Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_fields(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<gamma_api::Field>>> fields) {
    fbb_.AddOffset(Doc::VT_FIELDS, fields);
  }
  explicit DocBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Doc> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Doc>(end);
    return o;
  }
};

inline flatbuffers::Offset<Doc> CreateDoc(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<gamma_api::Field>>> fields = 0) {
  DocBuilder builder_(_fbb);
  builder_.add_fields(fields);
  return builder_.Finish();
}

inline flatbuffers::Offset<Doc> CreateDocDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<gamma_api::Field>> *fields = nullptr) {
  auto fields__ = fields ? _fbb.CreateVector<flatbuffers::Offset<gamma_api::Field>>(*fields) : 0;
  return gamma_api::CreateDoc(
      _fbb,
      fields__);
}

inline const gamma_api::Doc *GetDoc(const void *buf) {
  return flatbuffers::GetRoot<gamma_api::Doc>(buf);
}

inline const gamma_api::Doc *GetSizePrefixedDoc(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<gamma_api::Doc>(buf);
}

inline bool VerifyDocBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<gamma_api::Doc>(nullptr);
}

inline bool VerifySizePrefixedDocBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<gamma_api::Doc>(nullptr);
}

inline void FinishDocBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<gamma_api::Doc> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedDocBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<gamma_api::Doc> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace gamma_api

#endif  // FLATBUFFERS_GENERATED_DOC_GAMMA_API_H_
