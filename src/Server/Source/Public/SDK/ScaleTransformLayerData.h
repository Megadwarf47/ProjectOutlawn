///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/TransformLayerData.h>

namespace fb {
	class FloatTrackData;
}

namespace fb {
	class ScaleTransformLayerData : public TransformLayerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ScaleTransformLayerData"); }
		virtual ~ScaleTransformLayerData() override {}
		ScaleTransformLayerData() {
		};

		CtrRef<FloatTrackData> m_scaleX; // 0x38 (56)
		CtrRef<FloatTrackData> m_scaleY; // 0x40 (64)
		CtrRef<FloatTrackData> m_scaleZ; // 0x48 (72)
	}; // 0x50 (80)
}

