#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SanitizerSanitizeResponse_t {
    std::optional<std::vector<std::string>> texts;
    bool modified;
    std::optional<std::string> text;
  };

  inline void to_json(nlohmann::json& j, const SanitizerSanitizeResponse_t& v) {
    if(v.texts)
      j["texts"] = *v.texts;
    j["modified"] = v.modified;
    if(v.text)
      j["text"] = *v.text;
  }

  inline void from_json(const nlohmann::json& j, SanitizerSanitizeResponse_t& v) {
    if(auto it = j.find("texts"); it != j.end() && !it->is_null())
      v.texts = it->get<std::vector<std::string>>();
    v.modified = j.at("modified").get<bool>();
    if(auto it = j.find("text"); it != j.end() && !it->is_null())
      v.text = it->get<std::string>();
  }
  inline std::string to_string(const SanitizerSanitizeResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
