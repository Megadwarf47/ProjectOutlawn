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
	class IntTrackData : public PropertyTrackBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("IntTrackData"); }
		virtual ~IntTrackData() override {}
		IntTrackData() {
		};

		CtrRef<CurveData> m_curveData; // 0x30 (48)
	}; // 0x38 (56)
}

