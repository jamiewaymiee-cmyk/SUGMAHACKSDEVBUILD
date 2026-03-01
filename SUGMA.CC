local StarterGui = game:GetService("StarterGui")

local function createNotification()
	StarterGui:SetCore("SendNotification", {
		Title = "no cheats for you";
		Text = "i hate you, fuck you.";
		Duration = 5;
	})
end

createNotification()
