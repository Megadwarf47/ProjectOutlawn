///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/VectorShapeData.h>

namespace fb {
	class VolumeVectorShapeData : public VectorShapeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VolumeVectorShapeData"); }
		virtual ~VolumeVectorShapeData() override {}
		VolumeVectorShapeData() {
			m_height = 0.f;
		};

		float m_height; // 0x28 (40)
	}; // 0x30 (48)
}

