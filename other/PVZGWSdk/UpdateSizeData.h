///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>
#include <fb/Vec2.h>

namespace fb {
	class UpdateSizeData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UpdateSizeData"); }
		virtual ~UpdateSizeData() override {}
		UpdateSizeData() {
		};

		Vec2 m_pivot; // 0x28 (40)
	}; // 0x30 (48)
}

