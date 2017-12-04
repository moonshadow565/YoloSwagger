#ifndef SWAGGER_TYPES_LolChampSelectChampSelectBannedChampions_HPP
#define SWAGGER_TYPES_LolChampSelectChampSelectBannedChampions_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectChampSelectBannedChampions {
    // 
    std::vector<int32_t> myTeamBans;
    // 
    int32_t numBans;
    // 
    std::vector<int32_t> theirTeamBans;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectBannedChampions& v) {
    j["myTeamBans"] = v.myTeamBans;
    j["numBans"] = v.numBans;
    j["theirTeamBans"] = v.theirTeamBans;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectBannedChampions& v) {
    v.myTeamBans = j.at("myTeamBans").get<std::vector<int32_t>>;
    v.numBans = j.at("numBans").get<int32_t>;
    v.theirTeamBans = j.at("theirTeamBans").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectChampSelectBannedChampions_HPP
