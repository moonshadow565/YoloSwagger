#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksGameCustomizationDTO_t {
    std::string_t category;
    std::string_t content;
    uint64_t_t queueType;
  };

  inline void to_json(nlohmann::json& j, const LolPerksGameCustomizationDTO_t& v) {
    j["category"] = v.category;
    j["content"] = v.content;
    j["queueType"] = v.queueType;
  }

  inline void from_json(const nlohmann::json& j, LolPerksGameCustomizationDTO_t& v) {
    v.category = j.at("category").get<std::string_t>();
    v.content = j.at("content").get<std::string_t>();
    v.queueType = j.at("queueType").get<uint64_t_t>();
  }
  inline std::string to_string(const LolPerksGameCustomizationDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
