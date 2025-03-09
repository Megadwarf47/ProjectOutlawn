///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BaseShapeData.h>
#include <fb/Vec3.h>

namespace fb {
	class VectorShapeData : public BaseShapeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VectorShapeData"); }
		virtual ~VectorShapeData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		VectorShapeData() {
			m_tension = 0.5f;
			m_isClosed = false;
			m_allowRoll = false;
		};

		Array<Vec3> m_points; // 0x18 (24)
		float m_tension; // 0x20 (32)
		bool m_isClosed; // 0x24 (36)
		bool m_allowRoll; // 0x25 (37)
	}; // 0x28 (40)
}

