///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/ProcessorData.h>

namespace fb {
	class UpdateClipScaleData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UpdateClipScaleData"); }
		virtual ~UpdateClipScaleData() override {}
		UpdateClipScaleData() {
		};

		Array<s16> m_lookup; // 0x28 (40)
	}; // 0x30 (48)
}

