///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/LinearTransform.h>
#include <fb/WeaponSocketObjectData.h>

namespace fb {
	class WeaponRegularSocketObjectData : public WeaponSocketObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponRegularSocketObjectData"); }
		virtual ~WeaponRegularSocketObjectData() override {}
		WeaponRegularSocketObjectData() {
		};

		Array<LinearTransform> m_mesh3pTransforms; // 0x30 (48)
		LinearTransform m_transform; // 0x40 (64)
	}; // 0x80 (128)
}

