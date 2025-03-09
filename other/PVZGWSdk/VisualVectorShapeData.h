///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/VectorShapeData.h>

namespace fb {
	class SurfaceShaderBaseAsset;
}

namespace fb {
	class VisualVectorShapeData : public VectorShapeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VisualVectorShapeData"); }
		virtual ~VisualVectorShapeData() override {}
		VisualVectorShapeData() {
			m_errorTolerance = 0.1f;
			m_drawOrderIndex = 100;
			m_tessellationTriangleSize = 4.f;
		};

		float m_errorTolerance; // 0x28 (40)
		CtrRef<SurfaceShaderBaseAsset> m_shader3d; // 0x30 (48)
		u32 m_drawOrderIndex; // 0x38 (56)
		float m_tessellationTriangleSize; // 0x3C (60)
	}; // 0x40 (64)
}

