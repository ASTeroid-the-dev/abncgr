#include <Geode/Bindings.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
	void onMoreGames(CCObject*) {
		FLAlertLayer::create(
			"Thank you for playing ABNCG: Remastered!",
			"This mod is a <cy>remaster</c> of my original mod, ABNCG. Remember: this mod is still in development, so there might be <cr>bugs</c>.",
			"OK"
		)->show();
	}
};
