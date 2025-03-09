///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/RecordTrackChildrenData.h>

namespace fb {
	class KeyedTransformLayerData;
	class LayeredTransformTrackData;
}

namespace fb {
	class RecordRootTransformTrackData : public RecordTrackChildrenData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RecordRootTransformTrackData"); }
		virtual ~RecordRootTransformTrackData() override {}
		RecordRootTransformTrackData() {
		};

		CtrRef<LayeredTransformTrackData> m_layeredTransformTrack; // 0x38 (56)
		CtrRef<KeyedTransformLayerData> m_keyedTransformTrack; // 0x40 (64)
	}; // 0x48 (72)
}

