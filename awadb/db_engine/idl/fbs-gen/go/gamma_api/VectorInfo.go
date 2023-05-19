// Code generated by the FlatBuffers compiler. DO NOT EDIT.

package gamma_api

import (
	flatbuffers "github.com/google/flatbuffers/go"

	 ""
)

type VectorInfo struct {
	_tab flatbuffers.Table
}

func GetRootAsVectorInfo(buf []byte, offset flatbuffers.UOffsetT) *VectorInfo {
	n := flatbuffers.GetUOffsetT(buf[offset:])
	x := &VectorInfo{}
	x.Init(buf, n+offset)
	return x
}

func GetSizePrefixedRootAsVectorInfo(buf []byte, offset flatbuffers.UOffsetT) *VectorInfo {
	n := flatbuffers.GetUOffsetT(buf[offset+flatbuffers.SizeUint32:])
	x := &VectorInfo{}
	x.Init(buf, n+offset+flatbuffers.SizeUint32)
	return x
}

func (rcv *VectorInfo) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *VectorInfo) Table() flatbuffers.Table {
	return rcv._tab
}

func (rcv *VectorInfo) Name() []byte {
	o := flatbuffers.UOffsetT(rcv._tab.Offset(4))
	if o != 0 {
		return rcv._tab.ByteVector(o + rcv._tab.Pos)
	}
	return nil
}

func (rcv *VectorInfo) DataType() .DataType {
	o := flatbuffers.UOffsetT(rcv._tab.Offset(6))
	if o != 0 {
		return .DataType(rcv._tab.GetInt8(o + rcv._tab.Pos))
	}
	return 0
}

func (rcv *VectorInfo) MutateDataType(n .DataType) bool {
	return rcv._tab.MutateInt8Slot(6, int8(n))
}

func (rcv *VectorInfo) IsIndex() bool {
	o := flatbuffers.UOffsetT(rcv._tab.Offset(8))
	if o != 0 {
		return rcv._tab.GetBool(o + rcv._tab.Pos)
	}
	return false
}

func (rcv *VectorInfo) MutateIsIndex(n bool) bool {
	return rcv._tab.MutateBoolSlot(8, n)
}

func (rcv *VectorInfo) Dimension() int32 {
	o := flatbuffers.UOffsetT(rcv._tab.Offset(10))
	if o != 0 {
		return rcv._tab.GetInt32(o + rcv._tab.Pos)
	}
	return 0
}

func (rcv *VectorInfo) MutateDimension(n int32) bool {
	return rcv._tab.MutateInt32Slot(10, n)
}

func (rcv *VectorInfo) ModelId() []byte {
	o := flatbuffers.UOffsetT(rcv._tab.Offset(12))
	if o != 0 {
		return rcv._tab.ByteVector(o + rcv._tab.Pos)
	}
	return nil
}

func (rcv *VectorInfo) StoreType() []byte {
	o := flatbuffers.UOffsetT(rcv._tab.Offset(14))
	if o != 0 {
		return rcv._tab.ByteVector(o + rcv._tab.Pos)
	}
	return nil
}

func (rcv *VectorInfo) StoreParam() []byte {
	o := flatbuffers.UOffsetT(rcv._tab.Offset(16))
	if o != 0 {
		return rcv._tab.ByteVector(o + rcv._tab.Pos)
	}
	return nil
}

func (rcv *VectorInfo) HasSource() bool {
	o := flatbuffers.UOffsetT(rcv._tab.Offset(18))
	if o != 0 {
		return rcv._tab.GetBool(o + rcv._tab.Pos)
	}
	return false
}

func (rcv *VectorInfo) MutateHasSource(n bool) bool {
	return rcv._tab.MutateBoolSlot(18, n)
}

func VectorInfoStart(builder *flatbuffers.Builder) {
	builder.StartObject(8)
}
func VectorInfoAddName(builder *flatbuffers.Builder, name flatbuffers.UOffsetT) {
	builder.PrependUOffsetTSlot(0, flatbuffers.UOffsetT(name), 0)
}
func VectorInfoAddDataType(builder *flatbuffers.Builder, dataType .DataType) {
	builder.PrependInt8Slot(1, int8(dataType), 0)
}
func VectorInfoAddIsIndex(builder *flatbuffers.Builder, isIndex bool) {
	builder.PrependBoolSlot(2, isIndex, false)
}
func VectorInfoAddDimension(builder *flatbuffers.Builder, dimension int32) {
	builder.PrependInt32Slot(3, dimension, 0)
}
func VectorInfoAddModelId(builder *flatbuffers.Builder, modelId flatbuffers.UOffsetT) {
	builder.PrependUOffsetTSlot(4, flatbuffers.UOffsetT(modelId), 0)
}
func VectorInfoAddStoreType(builder *flatbuffers.Builder, storeType flatbuffers.UOffsetT) {
	builder.PrependUOffsetTSlot(5, flatbuffers.UOffsetT(storeType), 0)
}
func VectorInfoAddStoreParam(builder *flatbuffers.Builder, storeParam flatbuffers.UOffsetT) {
	builder.PrependUOffsetTSlot(6, flatbuffers.UOffsetT(storeParam), 0)
}
func VectorInfoAddHasSource(builder *flatbuffers.Builder, hasSource bool) {
	builder.PrependBoolSlot(7, hasSource, false)
}
func VectorInfoEnd(builder *flatbuffers.Builder) flatbuffers.UOffsetT {
	return builder.EndObject()
}
