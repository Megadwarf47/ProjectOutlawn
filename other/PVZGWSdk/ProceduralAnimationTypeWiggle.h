///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProceduralAnimationTypeSimple.h>
#include <fb/ProceduralAnimationWiggleMethod.h>

namespace fb {
	class ProceduralAnimationTypeWiggle : public ProceduralAnimationTypeSimple {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProceduralAnimationTypeWiggle"); }
		virtual ~ProceduralAnimationTypeWiggle() override {}
		ProceduralAnimationTypeWiggle() {
			m_wiggleMethod = ProceduralAnimationWiggleMethod::Wiggle_Palmtree;
		};

		ProceduralAnimationWiggleMethod m_wiggleMethod; // 0x20 (32)
	}; // 0x28 (40)
}

