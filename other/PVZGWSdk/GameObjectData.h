///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataBusPeer.h>

namespace fb {
	class GameObjectData : public DataBusPeer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameObjectData"); }
		virtual ~GameObjectData() override {}
		virtual bool getIsNetworkedResource() const { return false; }
		virtual bool getIsEntityOwner() const { return false; }
		virtual Realm getRealm() const { return Realm_ClientAndServer; }
		virtual EntityCreator* getCreator(Realm realm) const { return nullptr; }
		virtual DataContainer* getLinkTarget(int id) const { return nullptr; }
		GameObjectData() {
		};

	}; // 0x18 (24)
}

