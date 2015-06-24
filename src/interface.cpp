/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget *create_hdhomerun_config(void)
{
	GtkWidget *hdhomerun_config;
	GtkWidget *hbox1;
	GtkWidget *frame1;
	GtkWidget *vbox2;
	GtkWidget *scrolledwindow1;
	GtkWidget *DeviceListTree;
	GtkWidget *RescanBtn;
	GtkWidget *label1;
	GtkWidget *Tab;
	GtkWidget *vbox1;
	GtkWidget *frame2;
	GtkWidget *table2;
	GtkWidget *label11;
	GtkWidget *label12;
	GtkWidget *label13;
	GtkWidget *LaunchVlcBtn;
	GtkWidget *StopVlcBtn;
	GtkWidget *hbox2;
	GtkWidget *ChannelMapEdit;
	GtkObject *ChannelNumberSpin_adj;
	GtkWidget *ChannelNumberSpin;
	GtkWidget *ProgramList;
	GtkWidget *ScanDownBtn;
	GtkWidget *ScanUpBtn;
	GtkWidget *label15;
	GtkWidget *frame3;
	GtkWidget *table1;
	GtkWidget *label5;
	GtkWidget *label6;
	GtkWidget *label7;
	GtkWidget *label8;
	GtkWidget *SignalStrengthStatus;
	GtkWidget *SignalQualityStatus;
	GtkWidget *SymbolQualityStatus;
	GtkWidget *PhysicalChannelStatus;
	GtkWidget *label10;
	GtkWidget *NetworkRateStatus;
	GtkWidget *label4;
	GtkWidget *label2;
	GtkWidget *vbox3;
	GtkWidget *frame4;
	GtkWidget *table3;
	GtkWidget *FirmwareVersion;
	GtkWidget *UpgradeBtn;
	GtkWidget *hbox3;
	GtkWidget *UpgradeFilename;
	GtkWidget *UpgradeFilenameBtn;
	GtkWidget *label14;
	GtkWidget *label3;

	hdhomerun_config = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(hdhomerun_config), _("HDHomeRun Config"));
	gtk_window_set_resizable(GTK_WINDOW(hdhomerun_config), FALSE);

	hbox1 = gtk_hbox_new(FALSE, 6);
	gtk_widget_show(hbox1);
	gtk_container_add(GTK_CONTAINER(hdhomerun_config), hbox1);
	gtk_container_set_border_width(GTK_CONTAINER(hbox1), 3);

	frame1 = gtk_frame_new(NULL);
	gtk_widget_show(frame1);
	gtk_box_pack_start(GTK_BOX(hbox1), frame1, TRUE, TRUE, 0);

	vbox2 = gtk_vbox_new(FALSE, 3);
	gtk_widget_show(vbox2);
	gtk_container_add(GTK_CONTAINER(frame1), vbox2);
	gtk_container_set_border_width(GTK_CONTAINER(vbox2), 3);

	scrolledwindow1 = gtk_scrolled_window_new(NULL, NULL);
	gtk_widget_show(scrolledwindow1);
	gtk_box_pack_start(GTK_BOX(vbox2), scrolledwindow1, TRUE, TRUE, 0);

	DeviceListTree = gtk_tree_view_new();
	gtk_widget_show(DeviceListTree);
	gtk_container_add(GTK_CONTAINER(scrolledwindow1), DeviceListTree);
	gtk_tree_view_set_headers_visible(GTK_TREE_VIEW(DeviceListTree), FALSE);
	gtk_tree_view_set_enable_search(GTK_TREE_VIEW(DeviceListTree), FALSE);

	RescanBtn = gtk_button_new_with_mnemonic(_("_Rescan"));
	gtk_widget_show(RescanBtn);
	gtk_box_pack_start(GTK_BOX(vbox2), RescanBtn, FALSE, FALSE, 0);

	label1 = gtk_label_new(_("Device"));
	gtk_widget_show(label1);
	gtk_frame_set_label_widget(GTK_FRAME(frame1), label1);
	gtk_label_set_use_markup(GTK_LABEL(label1), TRUE);
	gtk_misc_set_padding(GTK_MISC(label1), 3, 0);

	Tab = gtk_notebook_new();
	gtk_widget_show(Tab);
	gtk_box_pack_start(GTK_BOX(hbox1), Tab, TRUE, TRUE, 0);

	vbox1 = gtk_vbox_new(FALSE, 0);
	gtk_widget_show(vbox1);
	gtk_container_add(GTK_CONTAINER(Tab), vbox1);

	frame2 = gtk_frame_new(NULL);
	gtk_widget_show(frame2);
	gtk_box_pack_start(GTK_BOX(vbox1), frame2, TRUE, TRUE, 0);
	gtk_container_set_border_width(GTK_CONTAINER(frame2), 3);

	table2 = gtk_table_new(3, 4, TRUE);
	gtk_widget_show(table2);
	gtk_container_add(GTK_CONTAINER(frame2), table2);
	gtk_container_set_border_width(GTK_CONTAINER(table2), 6);
	gtk_table_set_row_spacings(GTK_TABLE(table2), 3);
	gtk_table_set_col_spacings(GTK_TABLE(table2), 3);

	label11 = gtk_label_new(_("Channel"));
	gtk_widget_show(label11);
	gtk_table_attach(GTK_TABLE(table2), label11, 0, 1, 0, 1, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

	label12 = gtk_label_new(_("Program"));
	gtk_widget_show(label12);
	gtk_table_attach(GTK_TABLE(table2), label12, 0, 1, 1, 2, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

	label13 = gtk_label_new(_("Scan"));
	gtk_widget_show(label13);
	gtk_table_attach(GTK_TABLE(table2), label13, 0, 1, 2, 3, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

	LaunchVlcBtn = gtk_button_new_with_mnemonic(_("_View"));
	gtk_widget_show(LaunchVlcBtn);
	gtk_table_attach(GTK_TABLE(table2), LaunchVlcBtn, 3, 4, 0, 1, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

	StopVlcBtn = gtk_button_new_with_mnemonic(_("_Stop"));
	gtk_widget_show(StopVlcBtn);
	gtk_table_attach(GTK_TABLE(table2), StopVlcBtn, 3, 4, 1, 2, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);
	gtk_widget_set_sensitive(StopVlcBtn, FALSE);

	hbox2 = gtk_hbox_new(FALSE, 3);
	gtk_widget_show(hbox2);
	gtk_table_attach(GTK_TABLE(table2), hbox2, 1, 3, 0, 1, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

	ChannelMapEdit = gtk_combo_box_new_text();
	gtk_widget_show(ChannelMapEdit);
	gtk_box_pack_start(GTK_BOX(hbox2), ChannelMapEdit, TRUE, TRUE, 0);

	ChannelNumberSpin_adj = gtk_adjustment_new(0, 0, 300, 1, 10, 0);
	ChannelNumberSpin = gtk_spin_button_new(GTK_ADJUSTMENT(ChannelNumberSpin_adj), 1, 0);
	gtk_widget_show(ChannelNumberSpin);
	gtk_box_pack_start(GTK_BOX(hbox2), ChannelNumberSpin, FALSE, FALSE, 0);
	gtk_spin_button_set_numeric(GTK_SPIN_BUTTON(ChannelNumberSpin), TRUE);
	gtk_spin_button_set_snap_to_ticks(GTK_SPIN_BUTTON(ChannelNumberSpin), TRUE);

	ProgramList = gtk_combo_box_new_text();
	gtk_widget_show(ProgramList);
	gtk_table_attach(GTK_TABLE(table2), ProgramList, 1, 3, 1, 2, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

	ScanDownBtn = gtk_toggle_button_new_with_mnemonic("_<<-");
	gtk_widget_show(ScanDownBtn);
	gtk_table_attach(GTK_TABLE(table2), ScanDownBtn, 1, 2, 2, 3, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (0), 0, 0);

	ScanUpBtn = gtk_toggle_button_new_with_mnemonic("->_>");
	gtk_widget_show(ScanUpBtn);
	gtk_table_attach(GTK_TABLE(table2), ScanUpBtn, 2, 3, 2, 3, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (0), 0, 0);

	label15 = gtk_label_new(_("Configuration"));
	gtk_widget_show(label15);
	gtk_frame_set_label_widget(GTK_FRAME(frame2), label15);
	gtk_label_set_use_markup(GTK_LABEL(label15), TRUE);
	gtk_misc_set_padding(GTK_MISC(label15), 3, 0);

	frame3 = gtk_frame_new(NULL);
	gtk_widget_show(frame3);
	gtk_box_pack_start(GTK_BOX(vbox1), frame3, TRUE, TRUE, 0);
	gtk_container_set_border_width(GTK_CONTAINER(frame3), 3);

	table1 = gtk_table_new(6, 2, FALSE);
	gtk_widget_show(table1);
	gtk_container_add(GTK_CONTAINER(frame3), table1);
	gtk_container_set_border_width(GTK_CONTAINER(table1), 6);
	gtk_table_set_row_spacings(GTK_TABLE(table1), 2);
	gtk_table_set_col_spacings(GTK_TABLE(table1), 2);

	label5 = gtk_label_new(_("Physical Channel"));
	gtk_widget_show(label5);
	gtk_table_attach(GTK_TABLE(table1), label5, 0, 1, 0, 1, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

	label6 = gtk_label_new(_("Signal Strength %"));
	gtk_widget_show(label6);
	gtk_table_attach(GTK_TABLE(table1), label6, 0, 1, 1, 2, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

	label7 = gtk_label_new(_("Signal Quality %"));
	gtk_widget_show(label7);
	gtk_table_attach(GTK_TABLE(table1), label7, 0, 1, 2, 3, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

	label8 = gtk_label_new(_("Symbol Quality %"));
	gtk_widget_show(label8);
	gtk_table_attach(GTK_TABLE(table1), label8, 0, 1, 3, 4, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

	SignalStrengthStatus = gtk_progress_bar_new();
	gtk_widget_show(SignalStrengthStatus);
	gtk_table_attach(GTK_TABLE(table1), SignalStrengthStatus, 1, 2, 1, 2, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (0), 0, 0);

	SignalQualityStatus = gtk_progress_bar_new();
	gtk_widget_show(SignalQualityStatus);
	gtk_table_attach(GTK_TABLE(table1), SignalQualityStatus, 1, 2, 2, 3, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (0), 0, 0);

	SymbolQualityStatus = gtk_progress_bar_new();
	gtk_widget_show(SymbolQualityStatus);
	gtk_table_attach(GTK_TABLE(table1), SymbolQualityStatus, 1, 2, 3, 4, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (0), 0, 0);

	PhysicalChannelStatus = gtk_entry_new();
	gtk_widget_show(PhysicalChannelStatus);
	gtk_table_attach(GTK_TABLE(table1), PhysicalChannelStatus, 1, 2, 0, 1, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (0), 0, 0);
	gtk_widget_set_sensitive(PhysicalChannelStatus, FALSE);
	GTK_WIDGET_UNSET_FLAGS(PhysicalChannelStatus, GTK_CAN_FOCUS);
	gtk_editable_set_editable(GTK_EDITABLE(PhysicalChannelStatus), FALSE);
	gtk_entry_set_text(GTK_ENTRY(PhysicalChannelStatus), _("none"));
	gtk_entry_set_invisible_char(GTK_ENTRY(PhysicalChannelStatus), 9679);

	label10 = gtk_label_new(_("Network Rate"));
	gtk_widget_show(label10);
	gtk_table_attach(GTK_TABLE(table1), label10, 0, 1, 4, 5, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

	NetworkRateStatus = gtk_entry_new();
	gtk_widget_show(NetworkRateStatus);
	gtk_table_attach(GTK_TABLE(table1), NetworkRateStatus, 1, 2, 4, 5, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (0), 0, 0);
	gtk_widget_set_sensitive(NetworkRateStatus, FALSE);
	GTK_WIDGET_UNSET_FLAGS(NetworkRateStatus, GTK_CAN_FOCUS);
	gtk_editable_set_editable(GTK_EDITABLE(NetworkRateStatus), FALSE);
	gtk_entry_set_text(GTK_ENTRY(NetworkRateStatus), _("0.000 Mbps"));
	gtk_entry_set_invisible_char(GTK_ENTRY(NetworkRateStatus), 9679);

	label4 = gtk_label_new(_("Status"));
	gtk_widget_show(label4);
	gtk_frame_set_label_widget(GTK_FRAME(frame3), label4);
	gtk_label_set_use_markup(GTK_LABEL(label4), TRUE);
	gtk_misc_set_padding(GTK_MISC(label4), 3, 0);

	label2 = gtk_label_new(_("Tuner"));
	gtk_widget_show(label2);
	gtk_notebook_set_tab_label(GTK_NOTEBOOK(Tab), gtk_notebook_get_nth_page(GTK_NOTEBOOK(Tab), 0), label2);

	vbox3 = gtk_vbox_new(FALSE, 0);
	gtk_widget_show(vbox3);
	gtk_container_add(GTK_CONTAINER(Tab), vbox3);

	frame4 = gtk_frame_new(NULL);
	gtk_widget_show(frame4);
	gtk_box_pack_start(GTK_BOX(vbox3), frame4, FALSE, TRUE, 0);
	gtk_container_set_border_width(GTK_CONTAINER(frame4), 3);

	table3 = gtk_table_new(2, 2, FALSE);
	gtk_widget_show(table3);
	gtk_container_add(GTK_CONTAINER(frame4), table3);
	gtk_container_set_border_width(GTK_CONTAINER(table3), 3);
	gtk_table_set_row_spacings(GTK_TABLE(table3), 3);
	gtk_table_set_col_spacings(GTK_TABLE(table3), 3);

	FirmwareVersion = gtk_label_new("");
	gtk_widget_show(FirmwareVersion);
	gtk_table_attach(GTK_TABLE(table3), FirmwareVersion, 0, 1, 1, 2, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);
	gtk_misc_set_alignment(GTK_MISC(FirmwareVersion), 0, 0.5);

	UpgradeBtn = gtk_button_new_with_mnemonic(_("Upgrade"));
	gtk_widget_show(UpgradeBtn);
	gtk_table_attach(GTK_TABLE(table3), UpgradeBtn, 1, 2, 1, 2, (GtkAttachOptions) (0), (GtkAttachOptions) (0), 0, 0);
	gtk_widget_set_sensitive(UpgradeBtn, FALSE);

	hbox3 = gtk_hbox_new(FALSE, 3);
	gtk_widget_show(hbox3);
	gtk_table_attach(GTK_TABLE(table3), hbox3, 0, 2, 0, 1, (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

	UpgradeFilename = gtk_entry_new();
	gtk_widget_show(UpgradeFilename);
	gtk_box_pack_start(GTK_BOX(hbox3), UpgradeFilename, TRUE, TRUE, 0);
	gtk_entry_set_invisible_char(GTK_ENTRY(UpgradeFilename), 9679);

	UpgradeFilenameBtn = gtk_button_new_with_mnemonic("...");
	gtk_widget_show(UpgradeFilenameBtn);
	gtk_box_pack_start(GTK_BOX(hbox3), UpgradeFilenameBtn, FALSE, FALSE, 0);

	label14 = gtk_label_new(_("Upgrade"));
	gtk_widget_show(label14);
	gtk_frame_set_label_widget(GTK_FRAME(frame4), label14);
	gtk_misc_set_padding(GTK_MISC(label14), 3, 0);

	label3 = gtk_label_new(_("Upgrade"));
	gtk_widget_show(label3);
	gtk_notebook_set_tab_label(GTK_NOTEBOOK(Tab), gtk_notebook_get_nth_page(GTK_NOTEBOOK(Tab), 1), label3);

	g_signal_connect((gpointer) hdhomerun_config, "destroy", G_CALLBACK(gtk_main_quit), NULL);
	g_signal_connect((gpointer) hdhomerun_config, "key_press_event", G_CALLBACK(on_hdhomerun_config_key_press_event), NULL);
	g_signal_connect((gpointer) RescanBtn, "clicked", G_CALLBACK(on_RescanBtn_clicked), NULL);
	g_signal_connect_after((gpointer) Tab, "switch_page", G_CALLBACK(on_Tab_switch_page), NULL);
	g_signal_connect((gpointer) LaunchVlcBtn, "clicked", G_CALLBACK(on_LaunchVlcBtn_clicked), NULL);
	g_signal_connect((gpointer) StopVlcBtn, "clicked", G_CALLBACK(on_StopVlcBtn_clicked), NULL);
	g_signal_connect((gpointer) ChannelMapEdit, "changed", G_CALLBACK(on_ChannelMapEdit_changed), NULL);
	g_signal_connect((gpointer) ChannelNumberSpin, "value_changed", G_CALLBACK(on_ChannelNumberSpin_value_changed), NULL);
	g_signal_connect_after((gpointer) ChannelNumberSpin, "activate", G_CALLBACK(on_ChannelNumberSpin_activate), NULL);
	g_signal_connect((gpointer) ProgramList, "changed", G_CALLBACK(on_ProgramList_changed), NULL);
	g_signal_connect((gpointer) ScanDownBtn, "clicked", G_CALLBACK(on_ScanDownBtn_clicked), NULL);
	g_signal_connect((gpointer) ScanUpBtn, "clicked", G_CALLBACK(on_ScanUpBtn_clicked), NULL);
	g_signal_connect((gpointer) UpgradeBtn, "clicked", G_CALLBACK(on_UpgradeBtn_clicked), NULL);
	g_signal_connect((gpointer) UpgradeFilename, "changed", G_CALLBACK(on_UpgradeFilename_changed), NULL);
	g_signal_connect((gpointer) UpgradeFilenameBtn, "clicked", G_CALLBACK(on_UpgradeFilenameBtn_clicked), NULL);

	/* Store pointers to all widgets, for use by lookup_widget(). */
	GLADE_HOOKUP_OBJECT_NO_REF(hdhomerun_config, hdhomerun_config, "hdhomerun_config");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, hbox1, "hbox1");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, frame1, "frame1");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, vbox2, "vbox2");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, scrolledwindow1, "scrolledwindow1");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, DeviceListTree, "DeviceListTree");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, RescanBtn, "RescanBtn");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, label1, "label1");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, Tab, "Tab");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, vbox1, "vbox1");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, frame2, "frame2");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, table2, "table2");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, label11, "label11");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, label12, "label12");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, label13, "label13");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, LaunchVlcBtn, "LaunchVlcBtn");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, StopVlcBtn, "StopVlcBtn");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, hbox2, "hbox2");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, ChannelMapEdit, "ChannelMapEdit");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, ChannelNumberSpin, "ChannelNumberSpin");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, ProgramList, "ProgramList");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, ScanDownBtn, "ScanDownBtn");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, ScanUpBtn, "ScanUpBtn");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, label15, "label15");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, frame3, "frame3");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, table1, "table1");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, label5, "label5");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, label6, "label6");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, label7, "label7");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, label8, "label8");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, SignalStrengthStatus, "SignalStrengthStatus");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, SignalQualityStatus, "SignalQualityStatus");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, SymbolQualityStatus, "SymbolQualityStatus");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, PhysicalChannelStatus, "PhysicalChannelStatus");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, label10, "label10");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, NetworkRateStatus, "NetworkRateStatus");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, label4, "label4");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, label2, "label2");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, vbox3, "vbox3");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, frame4, "frame4");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, table3, "table3");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, FirmwareVersion, "FirmwareVersion");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, UpgradeBtn, "UpgradeBtn");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, hbox3, "hbox3");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, UpgradeFilename, "UpgradeFilename");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, UpgradeFilenameBtn, "UpgradeFilenameBtn");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, label14, "label14");
	GLADE_HOOKUP_OBJECT(hdhomerun_config, label3, "label3");

	return hdhomerun_config;
}
