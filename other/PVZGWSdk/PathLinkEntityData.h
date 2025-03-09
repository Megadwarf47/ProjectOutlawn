///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/PathLinkDirection.h>
#include <fb/SpatialEntityData.h>
#include <fb/Vec3.h>

namespace fb {
	class LinkDat;
}

namespace fb {
	class PathLinkEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PathLinkEntityData"); }
		virtual ~PathLinkEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		PathLinkEntityData() {
			m_direction = PathLinkDirection::PathLinkDirection_Forward;
			m_activeAtStart = true;
			m_deferredCreation = true;
		};

		Array<Vec3> m_points; // 0x60 (96)
		PathLinkDirection m_direction; // 0x68 (104)
		CtrRef<LinkDat> m_linkDat; // 0x70 (112)
		bool m_activeAtStart; // 0x78 (120)
		bool m_deferredCreation; // 0x79 (121)
	}; // 0x80 (128)
}

