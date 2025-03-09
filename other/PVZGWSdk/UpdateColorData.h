///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>
#include <fb/Vec3.h>

namespace fb {
	class UpdateColorData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UpdateColorData"); }
		virtual ~UpdateColorData() override {}
		UpdateColorData() {
			m_color = Vec3(1.f, 1.f, 1.f);
		};

		Vec3 m_color; // 0x30 (48)
	}; // 0x40 (64)
}

