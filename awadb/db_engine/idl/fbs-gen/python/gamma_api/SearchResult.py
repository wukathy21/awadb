# automatically generated by the FlatBuffers compiler, do not modify

# namespace: gamma_api

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class SearchResult(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAs(cls, buf, offset=0):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = SearchResult()
        x.Init(buf, n + offset)
        return x

    @classmethod
    def GetRootAsSearchResult(cls, buf, offset=0):
        """This method is deprecated. Please switch to GetRootAs."""
        return cls.GetRootAs(buf, offset)
    # SearchResult
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # SearchResult
    def Total(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int32Flags, o + self._tab.Pos)
        return 0

    # SearchResult
    def ResultCode(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int8Flags, o + self._tab.Pos)
        return 0

    # SearchResult
    def Msg(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.String(o + self._tab.Pos)
        return None

    # SearchResult
    def ResultItems(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        if o != 0:
            x = self._tab.Vector(o)
            x += flatbuffers.number_types.UOffsetTFlags.py_type(j) * 4
            x = self._tab.Indirect(x)
            from gamma_api.ResultItem import ResultItem
            obj = ResultItem()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

    # SearchResult
    def ResultItemsLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # SearchResult
    def ResultItemsIsNone(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        return o == 0

def Start(builder): builder.StartObject(4)
def SearchResultStart(builder):
    """This method is deprecated. Please switch to Start."""
    return Start(builder)
def AddTotal(builder, total): builder.PrependInt32Slot(0, total, 0)
def SearchResultAddTotal(builder, total):
    """This method is deprecated. Please switch to AddTotal."""
    return AddTotal(builder, total)
def AddResultCode(builder, resultCode): builder.PrependInt8Slot(1, resultCode, 0)
def SearchResultAddResultCode(builder, resultCode):
    """This method is deprecated. Please switch to AddResultCode."""
    return AddResultCode(builder, resultCode)
def AddMsg(builder, msg): builder.PrependUOffsetTRelativeSlot(2, flatbuffers.number_types.UOffsetTFlags.py_type(msg), 0)
def SearchResultAddMsg(builder, msg):
    """This method is deprecated. Please switch to AddMsg."""
    return AddMsg(builder, msg)
def AddResultItems(builder, resultItems): builder.PrependUOffsetTRelativeSlot(3, flatbuffers.number_types.UOffsetTFlags.py_type(resultItems), 0)
def SearchResultAddResultItems(builder, resultItems):
    """This method is deprecated. Please switch to AddResultItems."""
    return AddResultItems(builder, resultItems)
def StartResultItemsVector(builder, numElems): return builder.StartVector(4, numElems, 4)
def SearchResultStartResultItemsVector(builder, numElems):
    """This method is deprecated. Please switch to Start."""
    return StartResultItemsVector(builder, numElems)
def End(builder): return builder.EndObject()
def SearchResultEnd(builder):
    """This method is deprecated. Please switch to End."""
    return End(builder)