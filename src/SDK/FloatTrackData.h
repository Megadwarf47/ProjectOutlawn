///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/PropertyTrackBaseData.h>

namespace fb {
	class CurveData;
}

namespace fb {
	class FloatTrackData : public PropertyTrackBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FloatTrackData"); }
		virtual ~FloatTrackData() override {}
		FloatTrackData() {
		};

		CtrRef<CurveData> m_curveData; // 0x30 (48)
	}; // 0x38 (56)
}

