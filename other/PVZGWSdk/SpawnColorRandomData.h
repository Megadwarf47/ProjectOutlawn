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
	class SpawnColorRandomData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpawnColorRandomData"); }
		virtual ~SpawnColorRandomData() override {}
		SpawnColorRandomData() {
			m_color0 = Vec3(1.f, 1.f, 1.f);
			m_color1 = Vec3(1.f, 1.f, 1.f);

			m_evaluatorInput = EmittableField::EfOne;
		};

		Vec3 m_color0; // 0x30 (48)
		Vec3 m_color1; // 0x40 (64)
	}; // 0x50 (80)
}

