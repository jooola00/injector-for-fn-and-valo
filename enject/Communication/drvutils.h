#pragma once

void DriverInitialization()
{
	DRV().DriverHANDLE();

	if (!DRV().isLoaded())
	{
		cout << xor_a("[+] Loading Custom Driver") << endl;
		Mapper();
	}

	DRV().DriverHANDLE();
	if (DRV().isLoaded())
	{
		cout << xor_a("[+] Driver initialized Successfully");
	}
	else if (!DRV().isLoaded())
	{
		cout << xor_a("[-] Driver failed to initialize") << endl;
	}
}

