using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolFeaturedModesMaps
    {
        [DataMember(Name = "assets")]
        Dictionary<string, string> Assets { get; set; }

        [DataMember(Name = "gameModeName")]
        string GameModeName { get; set; }

        [DataMember(Name = "isRGM")]
        bool IsRGM { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolFeaturedModesMaps {\n");
            sb.Append("  Assets: ").Append(Assets).Append("\n");
            sb.Append("  GameModeName: ").Append(GameModeName).Append("\n");
            sb.Append("  IsRGM: ").Append(IsRGM).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}