///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/InterpolationType.h>
#include <fb/PropertyTrackData.h>

namespace fb {
	class SimplePropertyTrackData : public PropertyTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SimplePropertyTrackData"); }
		virtual ~SimplePropertyTrackData() override {}
		SimplePropertyTrackData() {
			m_interpolationType = InterpolationType::InterpolationType_Linear;
		};

		InterpolationType m_interpolationType; // 0x20 (32)
	}; // 0x28 (40)
}

