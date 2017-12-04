#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectPickableSkins_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectPickableSkins_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLobbyTeamBuilderChampSelectPickableSkins {
'    // 
    std::vector<int32_t> skinIds;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectPickableSkins& v) {
    j["skinIds"] = v.skinIds;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectPickableSkins& v) {
    v.skinIds = j.at("skinIds").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectPickableSkins_HPP
