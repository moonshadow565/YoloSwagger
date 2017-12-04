#ifndef SWAGGER_TYPES_LolCollectionsCollectionsSummonerSpells_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsSummonerSpells_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsSummonerSpells {
    // 
    std::vector<uint64_t> spells;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerSpells& v) {
    j["spells"] = v.spells;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerSpells& v) {
    v.spells = j.at("spells").get<std::vector<uint64_t>>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsSummonerSpells_HPP
