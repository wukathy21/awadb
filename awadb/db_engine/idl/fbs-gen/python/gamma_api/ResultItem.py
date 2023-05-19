# automatically generated by the FlatBuffers compiler, do not modify

# namespace: gamma_api

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class ResultItem(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAs(cls, buf, offset=0):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = ResultItem()
        x.Init(buf, n + offset)
        return x

    @classmethod
    def GetRootAsResultItem(cls, buf, offset=0):
        """This method is deprecated. Please switch to GetRootAs."""
        return cls.GetRootAs(buf, offset)
    # ResultItem
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # ResultItem
    def Score(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float64Flags, o + self._tab.Pos)
        return 0.0

    # ResultItem
    def Attributes(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            x = self._tab.Vector(o)
            x += flatbuffers.number_types.UOffsetTFlags.py_type(j) * 4
            x = self._tab.Indirect(x)
            from gamma_api.Attribute import Attribute
            obj = Attribute()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

    # ResultItem
    def AttributesLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # ResultItem
    def AttributesIsNone(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        return o == 0

    # ResultItem
    def Extra(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.String(o + self._tab.Pos)
        return None

def Start(builder): builder.StartObject(3)
def ResultItemStart(builder):
    """This method is deprecated. Please switch to Start."""
    return Start(builder)
def AddScore(builder, score): builder.PrependFloat64Slot(0, score, 0.0)
def ResultItemAddScore(builder, score):
    """This method is deprecated. Please switch to AddScore."""
    return AddScore(builder, score)
def AddAttributes(builder, attributes): builder.PrependUOffsetTRelativeSlot(1, flatbuffers.number_types.UOffsetTFlags.py_type(attributes), 0)
def ResultItemAddAttributes(builder, attributes):
    """This method is deprecated. Please switch to AddAttributes."""
    return AddAttributes(builder, attributes)
def StartAttributesVector(builder, numElems): return builder.StartVector(4, numElems, 4)
def ResultItemStartAttributesVector(builder, numElems):
    """This method is deprecated. Please switch to Start."""
    return StartAttributesVector(builder, numElems)
def AddExtra(builder, extra): builder.PrependUOffsetTRelativeSlot(2, flatbuffers.number_types.UOffsetTFlags.py_type(extra), 0)
def ResultItemAddExtra(builder, extra):
    """This method is deprecated. Please switch to AddExtra."""
    return AddExtra(builder, extra)
def End(builder): return builder.EndObject()
def ResultItemEnd(builder):
    """This method is deprecated. Please switch to End."""
    return End(builder)