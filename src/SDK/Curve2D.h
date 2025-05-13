///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/Vec2.h>

namespace fb {
	class Curve2D : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("Curve2D"); }
		virtual ~Curve2D() override {}
		Curve2D() {
		};

		Array<Vec2> m_curve; // 0x10 (16)
	}; // 0x18 (24)
}

