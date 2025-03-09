///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProceduralAnimationTypeSimple.h>
#include <fb/ProceduralAnimationWindMethod.h>

namespace fb {
	class ProceduralAnimationTypeWind : public ProceduralAnimationTypeSimple {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProceduralAnimationTypeWind"); }
		virtual ~ProceduralAnimationTypeWind() override {}
		ProceduralAnimationTypeWind() {
			m_windMethod = ProceduralAnimationWindMethod::Wind_Cloth;
		};

		ProceduralAnimationWindMethod m_windMethod; // 0x20 (32)
	}; // 0x28 (40)
}

