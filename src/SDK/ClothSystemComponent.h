///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/QualityScalableFloat.h>
#include <fb/QualityScalableInt.h>
#include <fb/SubWorldDataComponent.h>

namespace fb {
	class ClothSystemComponent : public SubWorldDataComponent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ClothSystemComponent"); }
		virtual ~ClothSystemComponent() override {}
		ClothSystemComponent() {
			m_vertexBuffersSize = QualityScalableInt(-1, -1, -1, -1);
			m_activationRadius = QualityScalableFloat(250.f, 250.f, 250.f, 250.f);
		};

		QualityScalableInt m_vertexBuffersSize; // 0x10 (16)
		QualityScalableFloat m_activationRadius; // 0x20 (32)
	}; // 0x30 (48)
}

